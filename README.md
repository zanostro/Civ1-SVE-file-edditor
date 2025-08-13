# Civilization I Save Editor

A C/C++ tool for reading and editing save files (`.SVE`) from the 1990 Sid Meier’s Civilization.  
This program allows retro game enthusiasts and modders to inspect, modify, and experiment with their original Civilization I save data.

## Purpose

The goal of this project is to make it easy to view and modify Civilization I game saves without reverse engineering the format yourself.  
It is intended for:
- Retro gaming fans who want to explore the internals of the game.
- Modders creating custom scenarios or experiments.
- Preservationists documenting game data formats.

The file format knowledge is based on community research from the CivFanatics forums.

## Build & Run

### Using `make`
```
mvn clean     # optional, only if you need a clean rebuild
make compile
make run
```

## Project Entry Point

The main program entry is:

SVE_file_edditor.cpp

## Special Thanks

Thanks to the CivFanatics community for their work documenting the `.SVE` file format:  
https://forums.civfanatics.com/threads/sve-file-format.493581/page-2#post-12422448  

Major contributors to the reference table:
- DarkPanda
- Gowron
- Dack
- Other CivFanatics members who contributed to the `.SVE` format research.

Without their reverse-engineering efforts, this project would not be possible.
