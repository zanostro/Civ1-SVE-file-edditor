cmake_minimum_required(VERSION 3.12)

project(Civ1-SVE-file-edditor VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

# ---- Auto-collect all sources ----
file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/src/*.c"
    "${CMAKE_CURRENT_LIST_DIR}/src/*.hpp"
    "${CMAKE_CURRENT_LIST_DIR}/src/*.h"
    "${CMAKE_CURRENT_LIST_DIR}/ui/*.ui"
    "${CMAKE_CURRENT_LIST_DIR}/res/*.qrc"
)

# Example: exclude default main.cpp if you have a custom entry
# list(FILTER PROJECT_SOURCES EXCLUDE REGEX ".*/main\\.cpp$")

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Civ1-SVE-file-edditor
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(Civ1-SVE-file-edditor SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(Civ1-SVE-file-edditor
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Civ1-SVE-file-edditor PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(Civ1-SVE-file-edditor PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Civ1-SVE-file-edditor)
endif()

# ------------------------------------------------------------------
# Manual build:
#   mkdir -p build
#   cmake -S . -B build -G Ninja
#   cmake --build build -j
#   ./build/Civ1-SVE-file-edditor
# ------------------------------------------------------------------
