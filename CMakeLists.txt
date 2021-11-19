cmake_minimum_required(VERSION 3.20)
project(PROYECTOSEGUNDOPARCIAL)

set(CMAKE_CXX_STANDARD 20)
set(Headers ElementosElectronica.h Resistencias.h OpAmp.h)
add_executable(PROYECTOSEGUNDOPARCIAL ${PROJECT_SOURCE_DIR}/main.cpp ElementosElectronica.cpp Resistencias.cpp OpAmp.cpp Kirchhoff.cpp Kirchhoff.h)
