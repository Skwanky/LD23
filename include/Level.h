#ifndef __Level_h_included__
#define __Level_h_included__
#include <tile.h>
#include <TriangleGraph.h>

class Level
{
  public:
	  const int id;
	  
	  //int size;
	  Level(int n, int id);
	  ~Level();
	  //void draw()const;
	  inline Tile& operator[](int i)const{return _tiles[i];}
	  inline int size()const{return _size;}
	  inline const TriangleGraph& triangleGraph()const{return _tg;}
  private:
	Tile* _tiles;
	
	TriangleGraph _tg;
	const int _size;
	
};

#endif