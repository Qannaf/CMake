# C++
## CMake
# Cmake & C++ cours complet
--------------------

<p align="center"><img width="420" height="210" src="images/cmake.jpg"></p>

## Table des matières
1. [Hello world](#1)


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
2. Hello world 
```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)
add_executable(a.out main.cpp hello.cpp)
```
3. Hello world with library static
```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_library(hellolib STATIC hello.cpp)
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC hellolib)
```

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

6. Hello World with bibliothèque d’en-têtes pure _glm_
```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_executable(a.out main.cpp)
target_include_directories(a.out PUBLIC glm/include)

```

7. Hello World with une bibliothèque tierce - introduite en tant que sous-modules
```C
cmake_minimum_required(VERSION 3.12)
project(hellocmake LANGUAGES CXX)

add_subdirectory(fmt)

add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC fmt)
```

7. Hello World with 
```C

```

8s. Hello World with 
```C

```