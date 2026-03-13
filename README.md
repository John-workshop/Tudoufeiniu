# 🎮 Tudoufeiniu
Official **Tudoufeiniu's** GitHub Repository.

A 2D puzzle game project developed in C.

---

# 📖 Project Introduction
**Between Two Memories** is a story-driven cooperative puzzle game built using Raylib and C language. The game is designed to be played by two players offline on separate screens. Each player receives different pieces of information so the players must communicate and collaborate in order to progress through the game and uncover the story.

The game focuses on:
- puzzle-solving mechanics with high levels of order thinking skills
- narrative-driven gameplay with interactive, mysterical-themed story
- cooperative real-life interaction-based problem solving

---

# 🧩 Gameplay Overview
Players progress through a sequence of puzzle scenes where each puzzle requires observation, logic, and interaction.

Game flow:
1. **Intro Scene** – story introduction  
2. **Menu Scene** – player navigation  
3. **Role Selection Scene** – choose character  
4. **Puzzle Scenes** – multiple puzzle challenges  
5. **Final Scene** – puzzle completion and ending  

Each puzzle scene introduces unique mechanics and interactions.

---

# 📁 Project Structure
```
project-folder
│
├── assets/                    # Game assets (images, audio, etc.)
│
├── src/                       # Source code
│   │
│   ├── core/                  # Core game systems (game loop, base engine logic)
│   ├── scenes/                # Scene and level management
│   ├── systems/               # Gameplay systems and puzzle logic
│   └── utils/                 # Helper functions and utilities
│
├── main.c                     # Main entry point of the program
├── scene_template.c           # Template for creating new scenes
│
├── save.dat                   # Save file for storing game progress
│
├── main.exe                   # Executable generated after build
└── between-two-moments.exe    # Previous executable name (older version)
```

---

# ⚙️ Core Systems

## Scene Manager
Controls scene transitions and scene lifecycle.

## Audio System
Handles music and sound effects.

## UI System
Manages interface elements such as menus and buttons.

## Save System
Stores player progress and game data.

---

# 🚀 Getting Started

1. Clone the repository:
```
git clone https://github.com/John-workshop/Tudoufeiniu.git
```
2. Open the project folder
3. Open the file `main.c` using Notepad++ for Raylib
4. Press `Fn + F6` or just `F6` to execute the file
5. Run Raylib build using the script provided below or you can configure it yourself :

```
echo > Setup required Environment
echo -------------------------------------
SET PROJECT_NAME=between-two-moments
SET RAYLIB_PATH=C:\raylib\raylib            
SET COMPILER_PATH=C:\raylib\w64devkit\bin
ENV_SET PATH=$(COMPILER_PATH)
SET CC=gcc
SET CFLAGS=$(RAYLIB_PATH)\src\raylib.rc.data -s -static -O2 -std=c99 -Wall -I$(RAYLIB_PATH)\src -Iexternal -DPLATFORM_DESKTOP
SET LDFLAGS=-lraylib -lopengl32 -lgdi32 -lwinmm
cd $(CURRENT_DIRECTORY)
echo
echo > Clean latest build
echo ------------------------
cmd /c IF EXIST $(PROJECT_NAME).exe del /F $(PROJECT_NAME).exe
echo
echo > Saving Current File
echo -------------------------
npp_save
echo
echo > Compile program
echo -----------------------
$(CC) --version
$(CC) -o $(PROJECT_NAME).exe main.c core/game.c core/scene_manager.c scenes/menu_scene.c scenes/selectrole_scene.c scenes/intro_scene.c scenes/puzzle1_scene.c systems/save_system.c systems/ui_system.c $(CFLAGS) $(LDFLAGS)
echo
echo > Reset Environment
echo --------------------------
ENV_UNSET PATH
echo
echo > Execute program
echo -----------------------
cmd /c IF EXIST $(PROJECT_NAME).exe $(PROJECT_NAME).exe
```
---

# 📌 Future Development
- Complete asset library
- Improve puzzle complexity
- Add additional scenes
- Improve UI and audio feedback
- Debugging and code maintainance

---

# 👨‍💻 Contributors
CEO - Kevin Othniel Sidikpramana (陈国伟) [1820252052]\
CIO - Emma Sisilia Wijaya (黄詩雅) - [1820252061]\
Programmer - John Alexander Budiyanto (君亚) - [1820252035]\
Designer - Valerie Sifra Andianta (陈飞翔) - [1820252030]\
Architect - Bryan Aurelius Kho (许基诚) - [1820252051]\
Tester - Max William Moeljadi (巫天成) - [1820252029]
