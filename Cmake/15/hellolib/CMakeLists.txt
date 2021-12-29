set(LIBRARY_NAME hellolib)

set(SRC_DIR ./src)
set(INCLUDE_DIR ./include)

file(GLOB SRC_FILES ${SRC_DIR}/*)
file(GLOB_RECURSE INCLUDE_FILES ${INCLUDE_DIR}/*)

add_library(${LIBRARY_NAME} STATIC ${SRC_FILES} ${INCLUDE_FILES})
target_include_directories(${LIBRARY_NAME} PUBLIC include/.)