CMAKE_MINIMUM_REQUIRED(VERSION 2.8.0)

SET(MAIN_PATH                  "${CMAKE_SOURCE_DIR}/src/main")
SET(TEST_PATH             "${CMAKE_SOURCE_DIR}/src/class")
set(PROJECT dodo)
set(TARGET  dodo_agent)
set(SOURCES ${MAIN_PATH}/main.cpp ${TEST_PATH}/test.cpp )

PROJECT(${PROJECT} C CXX ASM)
SET(TARGET_NAME "${PRJ_NAME}_output")
include_directories(${TEST_PATH} ${MAIN_PATH} )
add_subdirectory(${TEST_PATH})

ADD_EXECUTABLE(${TARGET_NAME} ${TEST_PATH}/test.cpp ${MAIN_PATH}/main.cpp )
TARGET_LINK_LIBRARIES(${TARGET_NAME} class)