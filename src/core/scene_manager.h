// Code made by John (君亚) at 2026/3/7 18:54 PM
// Code made by Valerie (陈飞翔) at 2026/3/7 19:02 PM
// Code made by Emma (君亚) at 2026/3/7 19:08 PM

#pragma once

#include "raylib.h"

typedef enum GameScene {
    SCENE_MENU,
    SELECT_ROLE,
    SCENE_INTRO,
    SCENE_PUZZLE1,
    /*SCENE_LEVEL2,
    SCENE_LEVEL3,
    SCENE_LEVEL4,
    SCENE_FINAL*/
} GameScene;

void InitScene(GameScene scene);
void UpdateScene();
void DrawScene();
void ChangeScene(GameScene newScene);