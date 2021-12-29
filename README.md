# C++
## Cmake & C++ cours complet
--------------------
<p align="center"><img width="420" height="210" src="images/cmake.jpg"></p>

## Table des matières
1. [Hello world Beta](#1)
1. [Hello world](#2)
1. [Hello world with library static](#3)
1. [Hello world with add_subdirectory](#4)
1. [Hello World with add_subdirectory _recommendation_](#5)
1. [Hello World with bibliothèque d’en-têtes pure _glm_](#6)
1. [Hello World with une bibliothèque tierce - introduite en tant que sous-modules](#7)
1. [Hello World with variables and static library ](#8)
1. [Hello World with variables and shared library ](#9)

<a name="1"></a>
1. Hello world Beta
<p>Un compilateur est un programme qui génère du code machine à partir du code source.

| C | C++ |
| ------ | ------ |
| gcc | g++|
| clang | clang++|

```C
add_executable(a.out main.cpp hello.cpp)
```

<a name="2"></a>
2. Hello world 
```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)
add_executable(a.out main.cpp hello.cpp)
```

<a name="3"></a>
3. Hello world with library static

```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_library(hellolib STATIC hello.cpp)
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC hellolib)
```

<a name="4"></a>
4. Hello world with add_subdirectory

```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)
add_subdirectory(hellolib)
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC hellolib)
```
and add this in the subdirectory CMakeLists.txt
>add_library(hellolib STATIC hello.cpp)<br>
! Attention  we need to add  #include"subdirectory/file.h"

<a name="5"></a>
5. Hello World with add_subdirectory _recommendation_

```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_subdirectory(hellolib)

add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC hellolib)
```
and add this in the subdirectory CMakeLists.txt
>add_library(hellolib STATIC hello.cpp)
><br>target_include_directories(hellolib PUBLIC .)
<br>! Attention  we need to add  #include<file.h>


<a name="6"></a>
6. Hello World with bibliothèque d’en-têtes pure _glm_

```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_executable(a.out main.cpp)
target_include_directories(a.out PUBLIC glm/include)

```
<a name="7"></a>
7. Hello World with une bibliothèque tierce - introduite en tant que sous-modules

```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_subdirectory(fmt)

add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC fmt)
```
<a name="8"></a>
8. Hello World with variables and static library 
![alt text](images/variables.png?raw=true "sortie de code")
* CMakeLists.txt
    ```CPP
    cmake_minimum_required(VERSION 3.12)
    project(hellocmake LANGUAGES CXX)

    add_subdirectory(hellolib)

    add_subdirectory(helloexe)
    ```

    * helloexe CMakeLists.txt
    ```CPP
    set(EXE_NAME a.out)

    set(SRC_DIR ./src)
    file(GLOB SRC_FILES ${SRC_DIR}/*)

    add_executable(${EXE_NAME} ${SRC_FILES})
    target_link_libraries(${EXE_NAME} PUBLIC hellolib)
    ```

    * hellolib CMakeLists.txt
    ```CPP
    set(LIBRARY_NAME hellolib)

    set(SRC_DIR ./src)
    set(INCLUDE_DIR ./include)

    file(GLOB SRC_FILES ${SRC_DIR}/*)
    file(GLOB_RECURSE INCLUDE_FILES ${INCLUDE_DIR}/*)

    add_library(${LIBRARY_NAME} STATIC ${SRC_FILES} ${INCLUDE_FILES})
    target_include_directories(${LIBRARY_NAME} PUBLIC include/.)
    ```

    <a name="9"></a>
9. Hello World with variables and shared library 
<p>Pour ajouter shared library, on fais comme on a fais pour le static library mais dans le dossier de la library dans CMakeLists.txt 
on remplace 

>add_library(${LIBRARY_NAME} STATIC ${SRC_FILES} ${INCLUDE_FILES})

par

>add_library(${LIBRARY_NAME} SHARED ${SRC_FILES} ${INCLUDE_FILES})
>target_include_directories(${LIBRARY_NAME} PUBLIC ${INCLUDE_DIR})
>target_compile_definitions(${LIBRARY_NAME} PRIVATE DLL_EXPORT) 