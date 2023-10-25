#include "CollisionManager.h"
namespace Collisions 
{
	void CheckBounds(Vector2& pos); // Se ocupa de manejar el warpeo al chocar con los bordes de la pantalla.
	void CheckBounds(Vector2& pos) 
	{
		if (pos.x < 0)
			pos.x = (float)GetScreenWidth();
		if (pos.x > (float)GetScreenWidth())
			pos.x = 0;
		if (pos.y < 0)
			pos.y = (float)GetScreenHeight();
		if (pos.y > (float)GetScreenHeight())
			pos.y = 0;
	}

	bool Vector2RectCollision(Vector2 v, Vector2 rectPos, Vector2 rectSize) 
	{
		return (v.x > rectPos.x && v.x < (rectPos.x + rectSize.x) && v.y > rectPos.y && v.y < (rectPos.y + rectSize.y));
	}

}