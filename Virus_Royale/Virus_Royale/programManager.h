#pragma once
/*
Aca Manejo los loops y distintas pantallas del juego.
*/

enum class GameScreen
{
	MAINMENU,
	INGAME,
	GAMEOVER,
	INSTRUCTIONS,
	CREDITS,
	SETTINGS
};

void ShouldGameClose(bool value);
void SetScreenStatus(GameScreen status);
void StartProgram();