// Code made by John (君亚) at 2026/3/7 17:12 PM
// Code made by Valerie (陈飞翔) at 2026/3/7 17:24 PM
// Code made by Emma (君亚) at 2026/3/7 17:26 PM

/**
 * @file scene_manager.c
 * @brief Implementation of the game's State Machine.
 * 
 * This module manages transitions between different game states (Scenes).
 * It delegates the standard Raylib Init/Update/Draw calls to the currently active scene.
 */

#include "scene_manager.h"
#include "../scenes/menu_scene.h" 
#include "../scenes/selectrole_scene.h"
#include "../scenes/intro_scene.h"
#include "../scenes/puzzle1_scene.h"

GameScene currentScene;

// Switches the active scene to a new state and immediately triggers its initialization.
void ChangeScene(GameScene newScene)
{
    currentScene = newScene;
    InitScene(currentScene);
}

void InitScene(GameScene scene)
{
    switch(scene)
    {
        case SCENE_MENU:
            InitMenuScene();
            break;
            
        case SELECT_ROLE:
            InitRoleScene();
            break;
            
        case SCENE_INTRO:
            InitIntroScene();
            break;

        case SCENE_PUZZLE1:
            InitPuzzle1Scene();
            break;
    }
}

void UpdateScene()
{
    switch(currentScene)
    {
        case SCENE_MENU:
            UpdateMenuScene();
            break;
            
        case SELECT_ROLE:
            UpdateRoleScene();
            break;

        case SCENE_INTRO:
            UpdateIntroScene();
            break;

        case SCENE_PUZZLE1:
            UpdatePuzzle1Scene();
            break;

        /*case SCENE_LEVEL2:
            UpdateLevel2Scene();
            break;

        case SCENE_LEVEL3:
            UpdateLevel3Scene();
            break;

        case SCENE_LEVEL4:
            UpdateLevel4Scene();
            break;

        case SCENE_FINAL:
            UpdateFinalScene();
            break;*/
    }
}

void DrawScene()
{
    switch(currentScene)
    {
        case SCENE_MENU:
            DrawMenuScene();
            break;
            
        case SELECT_ROLE:
            DrawRoleScene();
            break;

        case SCENE_INTRO:
            DrawIntroScene();
            break;

        case SCENE_PUZZLE1:
            DrawPuzzle1Scene();
            break;

        /*case SCENE_LEVEL2:
            DrawLevel2Scene();
            break;

        case SCENE_LEVEL3:
            DrawLevel3Scene();
            break;

        case SCENE_LEVEL4:
            DrawLevel4Scene();
            break;

        case SCENE_FINAL:
            DrawFinalScene();
            break;*/
    }
}