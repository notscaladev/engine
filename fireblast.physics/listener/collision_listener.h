#ifndef _COLLISIONLISTENER_H_
#define _COLLISIONLISTENER_H_

class CollisionListener
{
public:
	void onCollide(float x, float y, float z);
	bool isCollided();
};
#endif // !_COLLISIONLISTENER_H_
