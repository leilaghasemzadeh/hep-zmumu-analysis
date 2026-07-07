cmake_minimum_required(VERSION 3.20)

project(hep-zmumu-analysis)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(zmumu-analysis 
    src/main.cpp
    src/Particle.cpp
    src/Physics.cpp
    src/Event.cpp
    )
target_include_directories(
        zmumu-analysis
         PRIVATE
        include
        )
