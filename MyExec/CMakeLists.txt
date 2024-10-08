project(MyExec)

add_executable(MyExec src/main.cpp)
target_include_directories(MyExec PUBLIC ${CMAKE_SOURCE_DIR}/MyLibrary/src)
target_link_libraries(MyExec MyLibrary)