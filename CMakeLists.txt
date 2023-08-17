cmake_minimum_required (VERSION 2.8)
project(test)
# add_subdirectory(myFunc)
aux_source_directory(src DIR_SRCS)
# 指定生成目标
add_executable(test ${DIR_SRCS})
target_link_libraries(test ${PROJECT_SOURCE_DIR}/lib/libmyFunc.so)
