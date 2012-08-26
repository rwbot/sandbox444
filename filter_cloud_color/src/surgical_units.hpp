////////////////////////////////////////////////////////////////////////////////
using namespace Eigen;
using namespace std;

struct hole {

  Vector3f _xyz;
  uint8_t _H,_S,_V;
  uint8_t _Hstd, _Sstd, _Vstd;
  int _x_ID, _y_ID;

  hole() : _xyz(), _H(), _S(), _V(), _Hstd(), _Sstd(), _Vstd(), 
	   _x_ID(), _y_ID() {};

  hole(Vector3f xyz, uint8_t H, uint8_t S, uint8_t V,
       uint8_t Hstd, uint8_t Sstd, uint8_t Vstd, 
       int x_ID, int y_ID) :
    _xyz(xyz), _H(H), _S(S), _V(V), _Hstd(Hstd), _Sstd(Sstd), _Vstd(Vstd), 
    _x_ID(x_ID), _y_ID(y_ID) {};
};

struct cut {

  vector<Vector3f> _xyzs;
  uint8_t _H,_S,_V;
  uint8_t _Hstd, _Sstd, _Vstd;
  vector< int > _x_IDs, _y_IDs;

  cut() : _xyzs(), _H(), _S(), _V(), _Hstd(), _Sstd(), _Vstd(), 
	   _x_IDs(), _y_IDs() {};

  cut(Vector3f xyz, uint8_t H, uint8_t S, uint8_t V,
      uint8_t Hstd, uint8_t Sstd, uint8_t Vstd, 
      int x_ID, int y_ID) :
    _xyzs(), _H(H), _S(S), _V(V), _Hstd(Hstd), _Sstd(Sstd), _Vstd(Vstd), 
    _x_IDs(), _y_IDs() 
  { _xyzs.push_back(xyz); _x_IDs.push_back(x_ID); _y_IDs.push_back(y_ID); }

  cut(vector<Vector3f> xyzs, uint8_t H, uint8_t S, uint8_t V,
      uint8_t Hstd, uint8_t Sstd, uint8_t Vstd, 
      vector<int> x_IDs, vector<int> y_IDs) :
    _xyzs(xyzs), _H(H), _S(S), _V(V), _Hstd(Hstd), _Sstd(Sstd), _Vstd(Vstd), 
    _x_IDs(x_IDs), _y_IDs(y_IDs) {};

  void appendPoint (Vector3f xyz, int x_ID, int y_ID) 
  { _xyzs.push_back(xyz); _x_IDs.push_back(x_ID); _y_IDs.push_back(y_ID); }
  
};
