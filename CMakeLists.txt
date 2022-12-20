cmake_minimum_required(VERSION 3.23)
project(learningcards)

set(CMAKE_CXX_STANDARD 20)

add_executable(learningcards main.cpp filehandeling/Flashcard.cpp filehandeling/Flashcard.h)
