This repository contains a minimal example project that uses FastArduino library.

It allows you to jump start development with FastArduino.

This is targeted for linux platforms and has been tested on Ubuntu 16.04 and Fedora 26.

How to use?
===========

First you need to clone fast-arduino-lib somewhere on your drive, let's say you have cloned it at `~/electronics/fast-arduino-lib`.

Then get a zip (no need for a clone) from this repository (`wget https://github.com/jfpoilpret/fastarduino-project-template/archive/master.zip`) and unzip it at the same level as fast-arduino-lib:

    > cd ~/electronics
    > unzip master.zip
    > wget https://github.com/jfpoilpret/fastarduino-project-template/archive/master.zip
    > mv fastarduino-project-template-master **<MyProject>**

This will give you the following:

    ~/electronics
        /fast-arduino-lib
        /MyProject
            .clang-format
            .fastarduino
            Makefile
            MyProjectMain.cpp
            README.md
            /.vscode

In "MyProject", you get a minimal project, compilable for any target supported by FastArduino. `MyProjectMain.cpp` is the main source code file, showing the barebones FastArduino project. You should start your program from there.

The template project also comes with predefined settings for [Visual Studio Code](https://code.visualstudio.com/), along with [vscode-fastarduino extension](TODO).

The produced Makefile allows you, from the command line, to:
- build your project
- flash it to your target MCU

Makefile supports the following operations:
- **clean**: clean all generated files from previous build
- **build**: compiles all source files of the project, links them altogether, along with `libfastarduino.a`.
- **flash**: uploads the built program to the MCU target
- **eeprom**: uploads data, as defined in source code files, to the EEPROM of the MCU target
- **fuses**: changes MCU target fuses to default values or provided values

For any operation, you must specify the MCU target by setting `CONF=<config>` in make command line, where <config> is one of:
- UNO
- NANO
- LEONARDO
- MEGA
- ATmega328
- ATmega328-16MHz
- ATtinyX4

However, please note that direct usage of Makefile may seem complex (there are many more properties than `CONF` defined above) in comparison to using VSCode with FastArduino VSCode extension.

Provided settings for VSCode include:
- `.clang-format`: default format settings used by FastArduino library itself, that you may want to reuse for your own project, or adapt to your specific formatting guidelines.
- `.fastarduino`: this file is expected by FastArduino VSCode extension to recognize this project as a FastArduino-based project.

