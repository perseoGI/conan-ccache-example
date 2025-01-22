cmake_minimum_required(VERSION 3.15)
project(app CXX)

# Enable cache if available
find_program(CACHE_BINARY NAMES ccache)
if(CACHE_BINARY)
    message(STATUS "ccache found in ${CACHE_BINARY}: enabled")
    set(CMAKE_CXX_COMPILER_LAUNCHER ${CACHE_BINARY} CACHE FILEPATH "CXX compiler cache used")
    set(CMAKE_C_COMPILER_LAUNCHER ${CACHE_BINARY} CACHE FILEPATH "C compiler cache used")
else()
    message(WARNING "${CACHE_OPTION} is enabled but was not found. Not using it")
endif()


add_executable(app src/app.cpp src/main.cpp)



install(TARGETS app DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
