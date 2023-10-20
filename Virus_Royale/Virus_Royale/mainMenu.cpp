#include "raylib.h"

#include "mainMenu.h"
#include "button.h"
#include "programManager.h"

#include <iostream>


namespace MainMenu
{
	const int amountButtons = 3;
	Button buttons[amountButtons];

	const char* ButtonName(Options option);
	void SelectOption(Options option);
	void InitButtons();

	const char* ButtonName(Options option)
	{
		switch (option)
		{
		case MainMenu::Options::PLAY:
			return "Play";
			break;
		case MainMenu::Options::INSTRUCTIONS:
			return "How To Play";
			break;
		case MainMenu::Options::EXIT:
			return "Exit";
			break;
		default:
			break;
		}
	}
}

void SelectOption()
{
	
}

void initButtons()
{

}

void Draw()
{

}

void Update()
{

}