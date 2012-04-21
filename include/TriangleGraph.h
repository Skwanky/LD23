#ifndef __TriangleGraph_h_included__
#define __TriangleGraph_h_included__
#include <string>
#include <gl/glew.h>
#include <Vector3f.h>

class TriangleGraph
{
  public:
	TriangleGraph(int n);
	class Triangle
	{
	  public:
		  Vector3f a,b,c;
		  int n0,n1,n2;
		  inline Triangle(const Vector3f& a, const Vector3f& b, const Vector3f& c):a(a),b(b),c(c),n0(-1),n1(-1),n2(-1){}
		  inline Triangle():n0(-1),n1(-1),n2(-1){}
	};
	//Triangle operator[](int i)const{return triangles[i]};
	inline Triangle& operator[](int i){return _triangles[i];}
	inline int size()const{return _size;}
  private:	
	void  subdivide(const Triangle& tin, Triangle& tout1, Triangle& tout2, Triangle& tout3);
	TriangleGraph* tesselate(TriangleGraph tg);

	const int _size;
	int _currentSize;
	Triangle* _triangles;
	Triangle* _currentTriangles;
};
#endif