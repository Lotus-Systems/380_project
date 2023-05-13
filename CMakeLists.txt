cmake_minimum_required(VERSION 3.24)
project(380_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(380_project "Source Files/main.cpp" "include/ActionItems.h" "include/ActionItems.cpp" include/base_class.cpp include/Task.cpp include/Deliverable.cpp include/ID_Tracker.cpp include/Issue.cpp include/Resource.cpp include/Skill.cpp include/Decision.cpp include/Decision.h)
