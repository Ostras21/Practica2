cmake_minimum_required(VERSION 3.16)

project(Practica2 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Practica2
  main.cpp
  problema2.h problema2.cpp
  problema4.h problema4.cpp
  problema6.h problema6.cpp
  problema8.h problema8.cpp
  problema10.h problema10.cpp
  problema12.h
  problema12.cpp
  problema14.h
  problema14.cpp
  problema16.h
  problema16.cpp
)
target_link_libraries(Practica2 PRIVATE Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS Practica2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
