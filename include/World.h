#ifndef __World_H_INCLUDED__
#define __World_H_INCLUDED__

#include <Level.h>
#include <Genie.h>
#include <Projectile.h>
class World
{
  public:
	World();
	
	inline int current()const{return _currentLevel;};
	const int maxLevel;	
	inline const Level& level(int i)const;
	inline const Genie& genie()const {return _genie;} 
	inline const Projectile& attack()const {return _attack;}
	inline void setAttack(float revolutionsPerSecond, float lifeTime, const Matrix3x3f& r )
		{_attack=Projectile(revolutionsPerSecond,lifeTime,r);}
	inline Genie& genie_(){return _genie;}
	void tick(float time);
  private:
	int _currentLevel;
	Level _level0,_level1,_level2;
	Genie _genie;
	Projectile _attack;
	
};

const Level& World::level(int i)const
{
	switch (i)
	{
		//case 0: return _level0;
		case 1: return _level1;
		case 2: return _level2;	
	}
	return _level0;	
}
#endif
