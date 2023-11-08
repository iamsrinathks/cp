cmake_minimum_required(VERSION 3.0)
project(MiddlewareApp)

set(CMAKE_CXX_STANDARD 14)

# Add the source files to the project
add_executable(MiddlewareApp
    main.cpp
    KiruthikaImplementation.cpp
    PalaniveluImplementation.cpp
    Middleware.cpp
)

# Include directories
target_include_directories(MiddlewareApp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Link the required libraries if any

# Specify the name of the output executable
set_target_properties(MiddlewareApp PROPERTIES OUTPUT_NAME "middleware_app")

# Installation (optional)
install(TARGETS MiddlewareApp RUNTIME DESTINATION bin)

