#pragma once

#include "raylib.h"

int rotation = 360;

int asteroid_RotationSpeed_Min = 5;
int asteroid_RotationSpeed_Max = 240;


enum AsteroidSize
{
	Asteroid_Small = 1,
	Asteroid_Medium = 2,
	Asteroid_Big = 4,
} AsteroidSize;

struct Asteroid
{
	bool active;
	Vector2 position;
	Vector2 velocity;
	float rotation;
	float rotationSpeed;
} Asteroid;

