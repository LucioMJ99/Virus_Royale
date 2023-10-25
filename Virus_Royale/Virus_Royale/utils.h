#pragma once
#include "raylib.h"
#include <iostream>

const double m_pi = 3.14159265358979323846;

namespace Utils 
{
	void DrawCenteredText(const char* text, Vector2 pos, int fontSize, Color color);
	float Modulo(Vector2 vec);
	float RadiansToDegrees(float rad);
	Vector2 GetTargetVector(Vector2 origin, Vector2 target); // Devuelve un vector entre 2 vectores.
	float GetDistance(Vector2 v1, Vector2 v2); // Devuelve la distancia entre 2 vectores.
	float CalculateRotationAngle(Vector2 origin, Vector2 target); // Regresa el angulo entre la posicion y el origen.
}