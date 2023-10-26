#pragma once

namespace MainMenu 
{
	enum class Options
	{
		PLAY,
		INSTRUCTIONS,
		SETTINGS,
		CREDITS,
		EXIT
	};

	void Draw();
	void Update();
	void Init();

}