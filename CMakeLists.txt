cmake_minimum_required(VERSION 3.5)

project(Final_OOP_Revised VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Final_OOP_Revised
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        appointment.h appointment.cpp
        updateapp.h updateapp.cpp updateapp.ui
        appointmentapp.h appointmentapp.cpp
        updateappointment1.h updateappointment1.cpp updateappointment1.ui
        updateappointment2.h updateappointment2.cpp updateappointment2.ui
        updateappointment3.h updateappointment3.cpp updateappointment3.ui
        viewappointments.h viewappointments.cpp viewappointments.ui
        changetime.h changetime.cpp changetime.ui
        changetime1.h changetime1.cpp changetime1.ui

        changetime3.h changetime3.cpp changetime3.ui
        changetimetwo.h changetimetwo.cpp changetimetwo.ui



    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Final_OOP_Revised APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Final_OOP_Revised SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Final_OOP_Revised
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Final_OOP_Revised PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Final_OOP_Revised)
endif()
set_target_properties(Final_OOP_Revised PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Final_OOP_Revised
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Final_OOP_Revised)
endif()
