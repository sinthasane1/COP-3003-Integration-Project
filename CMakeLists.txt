cmake_minimum_required(VERSION 3.21)
project(seebstersquiz_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(seebstersquiz_
        BonusQuestion.cpp
        BonusQuestion.h
        main.cpp
        Question.cpp
        Question.h
        QuestionFactory.cpp)
