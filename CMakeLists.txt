cmake_minimum_required(VERSION 3.12)

project(dxFeed VERSION 1.0.0)

add_definitions(-DWIN32 -D_WINDOWS -D_USRDLL)
include_directories(external/adk src)
add_library(dxFeed SHARED src/Plugin.cpp src/dxFeed.cpp)
