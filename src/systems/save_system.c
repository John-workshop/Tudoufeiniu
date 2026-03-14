// Code made by John (君亚) at 2026/3/11 22:16 PM
// Code made by Max (巫天成) at 2026/3/11 00:05 PM
// Code made by Bryan (许基诚) at 2026/3/11 00:18 PM

#include "raylib.h"
#include <stdbool.h>
#include <stdio.h>
#include "save_system.h"
#include "../core/game.h"

typedef struct SaveGame
{
    int scene;
    int role;
} SaveGame;

// Serializes the current GameState into a binary file 'save.dat' for persistence.
void SaveGameFunc()
{
    FILE *file = fopen("save.dat", "wb");

    if(file == NULL) 
        return ;

    SaveGame data;

    data.scene = game.currentLevel;
    data.role = game.role;

    fwrite(&data, sizeof(SaveGame), 1, file);

    fclose(file);
}

bool LoadGame()
{
    FILE *file = fopen("save.dat", "rb");

    if(file == NULL)
        return false;

    SaveGame data;

    fread(&data, sizeof(SaveGame), 1, file);

    fclose(file);

    game.currentLevel = data.scene;
    game.role = data.role;

    return true;
}

bool SaveExists()
{
    FILE *file = fopen("save.dat", "rb");

    if(file)
    {
        fclose(file);
        return true;
    }

    return false;
}

void DeleteSave()
{
    remove("save.dat");
}