project(alt_tests CXX)

set(ALT_TESTS_SOURCES
    main.cpp
    insertion_sort_test.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
add_executable(${PROJECT_NAME} ${ALT_TESTS_SOURCES})


enable_testing()
add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR})