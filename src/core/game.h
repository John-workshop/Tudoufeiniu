// Code made by John (君亚) at 2026/3/6 22:53 PM
// Code made by Bryan (君亚) at 2026/3/6 22:14 PM

#ifndef GAME_H
#define GAME_H

#include <stdbool.h>

typedef enum PlayerRole
{
    ROLE_NONE = 0,
    ROLE_PAST,
    ROLE_FUTURE

} PlayerRole;

typedef struct GameState
{
     PlayerRole role;    // Current selected player role (PAST or FUTURE)
    int currentLevel;   // Progress tracker (0 = Menu, 1 = Intro/Puzzle1, etc.)

    float volume;       // Master audio volume (0.0f to 1.0f)
    float brightness;   // Screen brightness/alpha multiplier (0.0f to 1.0f)

    bool hasSave;       // Flag indicating if a valid save.dat exists

} GameState;

extern GameState game;

void InitGameState();
void ResetGameState();

#endif