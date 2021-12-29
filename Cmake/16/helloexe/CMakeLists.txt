set(EXE_NAME a.out)
set(SRC_DIR ./src)

file(GLOB SRC_FILES ${SRC_DIR}/*)

add_executable(${EXE_NAME} ${SRC_FILES})
target_link_libraries(${EXE_NAME} PUBLIC hellolib)