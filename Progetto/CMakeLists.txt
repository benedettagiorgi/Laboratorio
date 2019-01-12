cmake_minimum_required(VERSION 3.4)
project(Progetto)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)

set(SOURCE_FILES main.cpp Matrice.h eccezioneMat.h eccezioneIndice.h)
add_executable(Progetto ${SOURCE_FILES})