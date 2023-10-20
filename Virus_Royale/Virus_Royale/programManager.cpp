#include "raylib.h"

#include "programManager.h"
#include "game.h"

const int screenWidth = 800;
const int screenHeight = 450;

void CloseProgram();
void UpdateProgram();
void InitProgram();

void CloseProgram() 
{
	CloseWindow();
}

void UpdateProgram() 
{
	while (!WindowShouldClose()) 
	{
		Game::Update();
	}
}

void InitProgram() 
{
	InitWindow(screenWidth, screenHeight, "Virus Royale");
	Game::Init();
}

void StartProgram() 
{
	InitProgram();
	UpdateProgram();
	CloseProgram();
}