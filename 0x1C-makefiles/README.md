# 0x1C. C - Makefiles

## Overview
This repository contains a series of tasks related to Makefiles, a build automation tool used for compiling and managing C programs. The tasks aim to help you understand the fundamentals of Makefiles, how to create them, and their usage. This README provides an overview of the project's structure, objectives, and the tasks you need to complete.


### General
1. What are make and Makefiles?
2. When, why, and how to use Makefiles?
3. Understanding rules and how to set and use them.
4. Differentiating between explicit and implicit rules.
5. Identifying the most common and useful rules.
6. Working with variables and how to set and use them.


## Requirements
### General
- Allowed editors: vi, vim, emacs.
- Operating System: Ubuntu 20.04 LTS.
- Version of gcc: 9.3.0.
- Version of make: GNU Make 4.2.1.
- All your files should end with a newline.
- A README.md file, at the root of the project folder, is mandatory.

## Task 0 - 0-Makefile
### Requirements
- Create your first Makefile with the following specifications:
  - Name of the executable: school
  - Rules: all
  - The "all" rule should build your executable.
  - No variables are required.

## Task 1 - 1-Makefile
### Requirements
- Create a Makefile with the following specifications:
  - Name of the executable: school
  - Rules: all
  - The "all" rule should build your executable.
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files

## Task 2 - 2-Makefile
### Requirements
- Create a Makefile with the following specifications:
  - Name of the executable: school
  - Rules: all
  - The "all" rule should build your executable.
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
  - The "all" rule should recompile only the updated source files.

## Task 3 - 3-Makefile
### Requirements
- Create a Makefile with the following specifications:
  - Name of the executable: school
  - Rules: all, clean, oclean, fclean, re
  - The "all" rule should build your executable.
  - The "clean" rule should delete Emacs and Vim temporary files along with the executable.
  - The "oclean" rule should delete the object files.
  - The "fclean" rule should delete Emacs and Vim temporary files, the executable, and the object files.
  - The "re" rule should force recompilation of all source files.
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
    - RM: the program to delete files
  - The "all" rule should recompile only the updated source files.

## Task 4 - 4-Makefile
### Requirements
- Create a Makefile with the following specifications:
  - Name of the executable: school
  - Rules: all, clean, oclean, fclean, re
  - The "all" rule should build your executable.
  - The "clean" rule should delete Emacs and Vim temporary files along with the executable.
  - The "oclean" rule should delete the object files.
  - The "fclean" rule should delete Emacs and Vim temporary files, the executable, and the object files.
  - The "re" rule should force recompilation of all source files.
  - Variables:
    - CC: the compiler to be used
    - SRC: the .c files
    - OBJ: the .o files
    - NAME: the name of the executable
    - RM: the program to delete files
    - CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
  - The "all" rule should recompile only the updated source files.

## Task 5 - Island Perimeter
### Requirements
- Create a Python function `island_perimeter(grid)` that returns the perimeter of an island described in a grid.
- Specifications:
  - `grid` is a list of lists of integers.
  - 0 represents a water zone.
  - 1 represents a land zone.
  - Each cell is a square with side length 1.
  - Grid cells are connected horizontally/vertically (not diagonally).
  - The grid is rectangular, and the width and height don't exceed 100.
  - The grid is completely surrounded by water, and there is one island (or nothing).
  - The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
- First line should contain `#!/usr/bin/python3`.
- You are not allowed to import any modules.
- Both the module and the function must be documented.

## Conclusion
This project focuses on learning the essentials of Makefiles and building a Python function for calculating island perimeters. Please refer to the respective task files for detailed instructions on each task. Good luck with your project!
