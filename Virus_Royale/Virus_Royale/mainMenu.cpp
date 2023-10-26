#include "raylib.h"
#include "mainMenu.h"
#include "button.h"
#include "programManager.h"

namespace MainMenu
{
    const int amountButtons = 5;
    Button buttons[amountButtons];
    int selectedButton = 0;  // �ndice del bot�n seleccionado

    const char* ButtonName(Options option);
    void SelectOption(Options option);
    void InitButtons();

    const char* ButtonName(Options option)
    {
        switch (option)
        {
        case MainMenu::Options::PLAY:
            return "Play";
        case MainMenu::Options::INSTRUCTIONS:
            return "How To Play";
        case MainMenu::Options::SETTINGS:
            return "Settings";
        case MainMenu::Options::CREDITS:
            return "Credits";
        case MainMenu::Options::EXIT:
            return "Exit";
        default:
            return "";  // Devolver una cadena vac�a en caso de opci�n no v�lida
        }
    }

    void SelectOption(Options option)
    {
        // Implementa la l�gica para cada opci�n del men�
        switch (option)
        {
        case MainMenu::Options::PLAY:
            // L�gica para iniciar el juego
            break;
        case MainMenu::Options::INSTRUCTIONS:
            // L�gica para mostrar las instrucciones
            break;
        case Options::CREDITS:
            // L�gica para mostrar los creditos
            break;
        case Options::SETTINGS:
            // L�gica para mostrar los Settings
            break;
        case MainMenu::Options::EXIT:
            // L�gica para salir del juego
            break;
        default:
            break;
        }
    }

    void InitButtons()
    {
        // Posiciona y crea los botones utilizando el m�dulo button.cpp
        Vector2 buttonSize = { 200, 50 }; // Ajusta el tama�o de los botones seg�n tus necesidades

        // Puedes ajustar las posiciones seg�n tu dise�o
        buttons[(int)Options::PLAY] = Buttons::Create((int)Options::PLAY, { GetScreenWidth() / 2 - buttonSize.x / 2, 200 }, buttonSize, "Play");
        buttons[(int)Options::INSTRUCTIONS] = Buttons::Create((int)Options::INSTRUCTIONS, { GetScreenWidth() / 2 - buttonSize.x / 2, 300 }, buttonSize, "How To Play");
        buttons[(int)Options::SETTINGS] = Buttons::Create((int)Options::SETTINGS, { GetScreenWidth() / 2 - buttonSize.x / 2, 400 }, buttonSize, "Settings");
        buttons[(int)Options::CREDITS] = Buttons::Create((int)Options::CREDITS, { GetScreenWidth() / 2 - buttonSize.x / 2, 500 }, buttonSize, "Credits");
        buttons[(int)Options::EXIT] = Buttons::Create((int)Options::EXIT, { GetScreenWidth() / 2 - buttonSize.x / 2, 600 }, buttonSize, "Exit");
    }

    void DrawCenteredText(const char* text, Vector2 pos, int fontSize, Color color)
    {
        int textWide = MeasureText(text, fontSize);
        int x = (int)(pos.x) - (int)(textWide * 0.7f);
        int y = (int)(pos.y) - (int)(fontSize * 0.5f);
        DrawText(text, x, y, fontSize, color);
    }

    void DrawMenuLogo()
    {
        Vector2 pos1 = { GetScreenWidth() * .5f, GetScreenHeight() * .15f };
        DrawCenteredText("VIRUS ROYALE", pos1, int(GetScreenHeight() * .07f), RED);
    }

    void Draw()
    {
        DrawMenuLogo();
        // Dibuja los botones en la pantalla utilizando el m�dulo button.cpp
        for (int i = 0; i < MainMenu::amountButtons; ++i)
        {
            Buttons::Draw(MainMenu::buttons[i]);
        }
    }

    void Init()
    {
        InitButtons();
    }

    void Update()
    {
        // Maneja la selecci�n de botones utilizando el m�dulo button.cpp
        for (int i = 0; i < MainMenu::amountButtons; ++i)
        {
            if (Buttons::Update(MainMenu::buttons[i]))
            {
                MainMenu::SelectOption(static_cast<MainMenu::Options>(i));
            }
        }
    }
}


