#include "raylib.h"

#include "game.h"
#include "mainMenu.h"

namespace Game 
{

	void Draw() 
	{
		BeginDrawing();
		ClearBackground(BLACK);

		MainMenu::Draw();

		EndDrawing();
	}

	void Update() 
	{
		MainMenu::Update();
		Draw();
	}

	void Init() 
	{
		MainMenu::Init();
	}
}