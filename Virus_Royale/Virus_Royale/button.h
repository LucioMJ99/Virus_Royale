#pragma once
#include "raylib.h"

struct Button 
{
	int id;
	Vector2 pos;
	Vector2 size;
	Color col;
	const char* text;
	bool hovered;
};

namespace Buttons 
{
	void Draw(Button button);
	bool Update(Button& button);
	Button Create(int id, Vector2 pos, Vector2 size); // Creo un boton blanco sin texto.
	Button Create(int id, Vector2 pos, Vector2 size, Color col); // Creo un boton con un color no especifico sin texto.
	Button Create(int id, Vector2 pos, Vector2 size, const char* text); // Creo un boton blanco con texto.
	Button Create(int id, Vector2 pos, Vector2 size, Color col, const char* text); // Creo un boton con texto y un color no especifico.
}