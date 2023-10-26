#include "raylib.h"

#include "programManager.h"
#include "game.h"
#include "mainMenu.h"

const int screenWidth = 1024;
const int screenHeight = 768;

void initScreenStatus(GameScreen status);
void CloseProgram();
void UpdateProgram();
void InitProgram();

void initScreenStatus(GameScreen status)
{
	switch (status)
	{
	case GameScreen::MAINMENU:
		MainMenu::Init;
		break;
	case GameScreen::INGAME:
		Game::Init;
		break;
	case GameScreen::GAMEOVER:
		break;
	case GameScreen::CREDITS:
		break;
	case GameScreen::SETTINGS:
		break;
	}
}

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