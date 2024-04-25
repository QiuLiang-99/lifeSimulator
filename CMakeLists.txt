cmake_minimum_required(VERSION 3.5)

project(lifeSimulator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(CMAKE_PREFIX_PATH "D:/Qt/QT/6.6.2/mingw_64/include")
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
)

file(GLOB_RECURSE srcs ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE headers ${PROJECT_SOURCE_DIR}/src/*.h)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(lifeSimulator
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ${srcs} ${headers}

    )
else()
    if(ANDROID)
        add_library(lifeSimulator SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(lifeSimulator
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(lifeSimulator PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.lifeSimulator)
endif()
set_target_properties(lifeSimulator PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS lifeSimulator
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(lifeSimulator)
endif()
