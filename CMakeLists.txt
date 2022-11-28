cmake_minimum_required(VERSION 3.10)

project(
    meine_DB_Anwendung
    LANGUAGES CXX
    DESCRIPTION "Objektorientierte Programmierung"
)

find_package(cli11 QUIET)
if(NOT cli11_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        cli11
        GIT_REPOSITORY https://github.com/CLIUtils/CLI11
        GIT_TAG main
    )
endif(NOT cli11_FOUND)

add_executable( ${PROJECT_NAME} "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc")

target_link_libraries()