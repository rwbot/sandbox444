# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'traj_editor.ui'
#
# Created: Wed Feb 13 23:35:29 2013
#      by: PyQt4 UI code generator 4.9.1
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    _fromUtf8 = lambda s: s

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName(_fromUtf8("MainWindow"))
        MainWindow.resize(500, 680)
        MainWindow.setMinimumSize(QtCore.QSize(500, 680))
        MainWindow.setMaximumSize(QtCore.QSize(500, 16777215))
        MainWindow.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.centralwidget = QtGui.QWidget(MainWindow)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.frame = QtGui.QFrame(self.centralwidget)
        self.frame.setGeometry(QtCore.QRect(10, 530, 481, 141))
        self.frame.setFrameShape(QtGui.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtGui.QFrame.Raised)
        self.frame.setObjectName(_fromUtf8("frame"))
        self.playSelectedButton = QtGui.QPushButton(self.frame)
        self.playSelectedButton.setGeometry(QtCore.QRect(150, 100, 141, 27))
        self.playSelectedButton.setObjectName(_fromUtf8("playSelectedButton"))
        self.playSlider = QtGui.QSlider(self.frame)
        self.playSlider.setGeometry(QtCore.QRect(20, 70, 421, 29))
        self.playSlider.setOrientation(QtCore.Qt.Horizontal)
        self.playSlider.setTickPosition(QtGui.QSlider.TicksAbove)
        self.playSlider.setObjectName(_fromUtf8("playSlider"))
        self.startSlider = QtGui.QSlider(self.frame)
        self.startSlider.setGeometry(QtCore.QRect(20, 20, 421, 31))
        self.startSlider.setOrientation(QtCore.Qt.Horizontal)
        self.startSlider.setTickPosition(QtGui.QSlider.NoTicks)
        self.startSlider.setObjectName(_fromUtf8("startSlider"))
        self.endSlider = QtGui.QSlider(self.frame)
        self.endSlider.setGeometry(QtCore.QRect(20, 40, 421, 29))
        self.endSlider.setLayoutDirection(QtCore.Qt.RightToLeft)
        self.endSlider.setOrientation(QtCore.Qt.Horizontal)
        self.endSlider.setTickPosition(QtGui.QSlider.NoTicks)
        self.endSlider.setObjectName(_fromUtf8("endSlider"))
        self.frame_2 = QtGui.QFrame(self.centralwidget)
        self.frame_2.setGeometry(QtCore.QRect(10, 10, 481, 511))
        self.frame_2.setFrameShape(QtGui.QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QtGui.QFrame.Raised)
        self.frame_2.setObjectName(_fromUtf8("frame_2"))
        self.trajList = QtGui.QListWidget(self.frame_2)
        self.trajList.setGeometry(QtCore.QRect(40, 40, 351, 401))
        self.trajList.setDragEnabled(False)
        self.trajList.setObjectName(_fromUtf8("trajList"))
        self.copyButton = QtGui.QPushButton(self.frame_2)
        self.copyButton.setGeometry(QtCore.QRect(90, 450, 111, 27))
        self.copyButton.setObjectName(_fromUtf8("copyButton"))
        self.exportButton = QtGui.QPushButton(self.frame_2)
        self.exportButton.setGeometry(QtCore.QRect(230, 450, 111, 27))
        self.exportButton.setObjectName(_fromUtf8("exportButton"))
        self.downButton = QtGui.QToolButton(self.frame_2)
        self.downButton.setGeometry(QtCore.QRect(390, 80, 51, 41))
        self.downButton.setAutoRaise(False)
        self.downButton.setArrowType(QtCore.Qt.DownArrow)
        self.downButton.setObjectName(_fromUtf8("downButton"))
        self.addButton = QtGui.QToolButton(self.frame_2)
        self.addButton.setGeometry(QtCore.QRect(390, 360, 51, 41))
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(_fromUtf8("icons/add.png")), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.addButton.setIcon(icon)
        self.addButton.setIconSize(QtCore.QSize(30, 30))
        self.addButton.setToolButtonStyle(QtCore.Qt.ToolButtonIconOnly)
        self.addButton.setAutoRaise(False)
        self.addButton.setArrowType(QtCore.Qt.NoArrow)
        self.addButton.setObjectName(_fromUtf8("addButton"))
        self.removeButton = QtGui.QToolButton(self.frame_2)
        self.removeButton.setGeometry(QtCore.QRect(390, 400, 51, 41))
        icon1 = QtGui.QIcon()
        icon1.addPixmap(QtGui.QPixmap(_fromUtf8("icons/delete.png")), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.removeButton.setIcon(icon1)
        self.removeButton.setIconSize(QtCore.QSize(30, 30))
        self.removeButton.setAutoRaise(False)
        self.removeButton.setArrowType(QtCore.Qt.NoArrow)
        self.removeButton.setObjectName(_fromUtf8("removeButton"))
        self.upButton = QtGui.QToolButton(self.frame_2)
        self.upButton.setGeometry(QtCore.QRect(390, 40, 51, 41))
        self.upButton.setAutoRaise(False)
        self.upButton.setArrowType(QtCore.Qt.UpArrow)
        self.upButton.setObjectName(_fromUtf8("upButton"))
        self.dialog = QtGui.QFileDialog()
        self.dialog.setFileMode(QtGui.QFileDialog.ExistingFiles)

        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QtGui.QApplication.translate("MainWindow", "Trajectory Editor", None, QtGui.QApplication.UnicodeUTF8))
        self.playSelectedButton.setText(QtGui.QApplication.translate("MainWindow", "Play Selected", None, QtGui.QApplication.UnicodeUTF8))
        self.copyButton.setText(QtGui.QApplication.translate("MainWindow", "Add Copy", None, QtGui.QApplication.UnicodeUTF8))
        self.exportButton.setText(QtGui.QApplication.translate("MainWindow", "Export Merged", None, QtGui.QApplication.UnicodeUTF8))
        self.downButton.setToolTip(QtGui.QApplication.translate("MainWindow", "Move Down", None, QtGui.QApplication.UnicodeUTF8))
        self.downButton.setText(QtGui.QApplication.translate("MainWindow", "...", None, QtGui.QApplication.UnicodeUTF8))
        self.addButton.setToolTip(QtGui.QApplication.translate("MainWindow", "Add Trajectory", None, QtGui.QApplication.UnicodeUTF8))
        self.addButton.setText(QtGui.QApplication.translate("MainWindow", "...", None, QtGui.QApplication.UnicodeUTF8))
        self.removeButton.setToolTip(QtGui.QApplication.translate("MainWindow", "Remove Selection", None, QtGui.QApplication.UnicodeUTF8))
        self.removeButton.setText(QtGui.QApplication.translate("MainWindow", "...", None, QtGui.QApplication.UnicodeUTF8))
        self.upButton.setToolTip(QtGui.QApplication.translate("MainWindow", "Move Up", None, QtGui.QApplication.UnicodeUTF8))
        self.upButton.setText(QtGui.QApplication.translate("MainWindow", "...", None, QtGui.QApplication.UnicodeUTF8))


if __name__ == "__main__":
    import sys
    app = QtGui.QApplication(sys.argv)
    MainWindow = QtGui.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())

