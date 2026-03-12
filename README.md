# 🎮 Tudoufeiniu
Official **Tudoufeiniu** GitHub Repository.

A 2D puzzle game project developed in C.

---

# 📖 Project Introduction
Tudoufeiniu is a **2D puzzle game** that challenges players to solve puzzles through logical reasoning and interaction with the environment.

The game focuses on:
- puzzle-solving mechanics with high levels of order thinking skills
- narrative-driven gameplay with interactive, mysterical-themed story
- cooperative real-life interaction-based problem solving

---

# 🧩 Gameplay Overview
Players progress through a sequence of puzzle scenes where each puzzle requires observation, logic, and interaction.

Game flow:
![project game flow] (assets/project orientation.jpeg)
1. **Intro Scene** – story introduction  
2. **Menu Scene** – player navigation  
3. **Role Selection Scene** – choose character  
4. **Puzzle Scenes** – multiple puzzle challenges  
5. **Final Scene** – puzzle completion and ending  

Each puzzle scene introduces unique mechanics and interactions.

---

# 📁 Project Structure
```
Tudoufeiniu
│
├── Assets
│   └── (under construction)
│
├── src
│   │
│   ├── core
│   │   ├── game.c
│   │   ├── game.h
│   │   ├── scene_manager.c
│   │   └── scene_manager.h
│   │
│   ├── scenes
│   │   ├── final_scene.c
│   │   ├── intro_scene.c
│   │   ├── intro_scene.h
│   │   ├── menu_scene.c
│   │   ├── menu_scene.h
│   │   ├── puzzle1_scene.c
│   │   ├── puzzle1_scene.h
│   │   ├── puzzle2_scene.c
│   │   ├── puzzle3_scene.c
│   │   ├── puzzle4_scene.c
│   │   ├── selectrole_scene.c
│   │   └── selectrole_scene.h
│   │
│   ├── systems
│   │   ├── audio_system.c
│   │   ├── save_system.c
│   │   ├── save_system.h
│   │   ├── ui_system.c
│   │   └── ui_system.h
│   │
│   └── utils
│       ├── constants.c
│       └── constants.h
│
├── main.c
├── scene_template.c
├── save.dat
├── between-two-moments.exe
└── main.exe
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

Clone the repository:
/link/

Compile and run the project using your C compiler.

---

# 📌 Future Development
- Complete asset library
- Improve puzzle complexity
- Add additional scenes
- Improve UI and audio feedback
- Debugging and code maintainance

---

# 👨‍💻 Contributors
CEO - Kevin Othniel Sidikpramana (陈国伟) - 1820252052\
CIO - Emma Sisilia Wijaya (黄詩雅) - 1820252061\
Programmer - John Alexander Budiyanto (君亚) - 1820252035\
Designer - Valerie Sifra Andianta (陈飞翔) - 18202520\
Architect - Bryan Aurelius Kho (许基诚) - 1820252051\
Tester - Max William Moeljadi (巫天成) - 18202520
