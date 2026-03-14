#include "raylib.h"
#include "game.h"

// Code made by John (君亚) at 2026/3/6 21:16 PM
GameState game;

// Initializes the global GameState structure with default values.
// This function is called once when the game starts to prepare
// the initial settings such as role, level, audio volume,
// brightness, and save state.
void InitGameState()
{
    game.role = ROLE_NONE;
    game.currentLevel = 0;

    game.volume = 1.0f;
    game.brightness = 1.0f;

    game.hasSave = false;
}

// Resets the gameplay-related fields of the GameState.
// This is used when restarting the game or starting a new session,
// while keeping persistent settings such as volume and brightness.
void ResetGameState()
{
    game.role = ROLE_NONE;
    game.currentLevel = 0;
}