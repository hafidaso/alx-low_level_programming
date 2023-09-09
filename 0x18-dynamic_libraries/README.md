# 0x18. Dynamic Libraries

This repository contains C and Bash scripts related to dynamic libraries. It covers topics such as creating dynamic libraries, using them in C and Python, understanding environment variables, and more.

## Resources

Before you start, make sure to read or watch the following resources:

- [What is the difference between Dynamic and Static library (Static and Dynamic linking)](resource_link)
- [Create dynamic libraries on Linux](resource_link)

## Learning Objectives

By the end of this project, you should be able to explain to anyone, without the help of Google:

- What is a dynamic library, how it works, how to create one, and how to use it.
- What the environment variable `$LD_LIBRARY_PATH` is and how to use it.
- The differences between static and shared libraries.
- Basic usage of `nm`, `ldd`, and `ldconfig`.

## Requirements

### C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file at the root of the folder is mandatory.
- Your code should follow the Betty style.
- Do not use global variables.
- No more than 5 functions per file.
- Do not use the standard library functions like `printf`, `puts`, etc.
- You are allowed to use `_putchar`.

### Bash

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS.
- All your files should end with a new line.
- The first line of all your files should be `#!/bin/bash`.
- A `README.md` file at the root of the folder, describing what each script is doing, is mandatory.
- All your files must be executable.

## Tasks

1. **A library is not a luxury but one of the necessities of life:**
   - Create the dynamic library `libdynamic.so` containing various functions.

2. **Without libraries what have we? We have no past and no future:**
   - Write a script that creates a dynamic library `liball.so` from all the `.c` files in the current directory.

3. **Let's call C functions from Python:**
   - Create a dynamic library that contains C functions callable from Python.

4. **Code injection: Win the Giga Millions!:**
   - Use a shell script to exploit a system vulnerability and influence the outcome of the Giga Millions program.

## Instructions for Compilation and Usage

For each task, follow the provided instructions to compile the code and run the necessary scripts. The provided example outputs demonstrate expected behavior.

Make sure to consult the task-specific details in the README files for each task for more detailed instructions and explanations.

Please note that this generated README provides a brief overview. Be sure to review the actual content of your project's files for accuracy and completeness.

