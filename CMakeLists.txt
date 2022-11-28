cmake_minimum_required(VERSION 3.10)

project(
    meine_DB_Anwendung
    LANGUAGES CXX
    DESCRIPTION "Objektorientierte Programmierung"
)

add_executable( ${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc")