import numpy as np
from rapprentice.colorize import *


class Grips:
    """
    Enums for robot grasps
    """
    RELEASE_R = 0
    GRAB_R    = 1
    RELEASE_L = 2
    GRAB_L    = 3


def getnewseg():
    return {'jtimes' : [], 'joints':[], 'ptimes':[], 'points':[], 'gtimes':[], 'grips':[]}


def readpoints(file):
    points = []
    for line in file:
        if 'end-points' in line:
            return points
        
        if line.startswith('\t') and not line.startswith('\t\t'):
            continue
        else:
            point = [float(coord) for coord in line.split()]
            points.append(point)


def parsescene(fname):
    file = open(fname, 'r')

    # fast-forward to the first look:
    try:
        while('look' not in file.next()):
            pass
    except StopIteration:
        print colorize("[ERROR : Scene parser] : First look not found", "red", True)
        raise RuntimeError

    
    segments = []

    currseg = getnewseg()

    for line in file:
        splitline = line.split()
        
        if splitline[1] != ":" :
            print colorize("[ERROR : Scene parser] : Error in format -- prompt missing.", "red", True)
            raise RuntimeError
            
        cmd = splitline[2]
        timestamp = float(splitline[0])
            
        if cmd == 'points':
            currseg['ptimes'].append(timestamp)
            currseg['points'].append(readpoints(file))

        elif cmd == 'joints':
            joints = [float(j) for j in splitline[4:]]
            currseg['jtimes'].append(timestamp)
            currseg['joints'].append(joints)
            
        elif cmd == 'grab':
            grab = Grips.GRAB_R if splitline[3]=='r' else Grips.GRAB_L
            currseg['gtimes'].append(timestamp)
            currseg['grips'].append(grab)
            
        elif cmd == 'release':
            release = Grips.RELEASE_R if splitline[3]=='r' else Grips.RELEASE_L
            currseg['gtimes'].append(timestamp)
            currseg['grips'].append(release)

        elif cmd == 'look':
            segments.append(currseg)
            currseg = getnewseg()

    segments.append(currseg)
    return segments
