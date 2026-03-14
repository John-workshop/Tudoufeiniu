/**
 * @file main.c
 * @brief Entry point for the "Between Two Moments" game.
 * 
 * This file handles the initial window setup, global state initialization,
 * and the main game loop which orchestrates the update and draw cycles
 * via the Scene Manager.
 */

// Code made by John (君亚) at 2026/3/6 19:32 PM
// Code made by Bryan (君亚) at 2026/3/6 21:22 PM
// Code made by Max (君亚) at 2026/3/6 21:28 PM

#include "raylib.h"
#include "utils/constants.h"
#include "core/game.h"
#include "core/scene_manager.h"

// Program main entry point
int main(void)
{
    // Initialization
    const int screenWidth = SCREEN_WIDTH;
    const int screenHeight = SCREEN_HEIGHT;
    

    InitWindow(screenWidth, screenHeight, "Between Two Moments");

    SetTargetFPS(60);      // Set our game to run at 60 frames-per-second
    
    
    InitGameState();
    ChangeScene(SCENE_MENU);
    
    // Main game loop

    // Main game loop: Runs until the window is closed or ESC is pressed.
    // UpdateScene() handles logic/state changes, while DrawScene() handles rendering.
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update variables
        UpdateScene();
        
        // Draw
        
        BeginDrawing();
        
            DrawScene();
            
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
  
    CloseWindow();        // Close window and OpenGL context

    return 0;
}
