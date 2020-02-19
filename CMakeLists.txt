cmake_minimum_required(VERSION 3.12)

project(dxFeed VERSION 1.0.0)

include_directories(external src)
add_library(dxFeed SHARED src/Plugin.cpp)
