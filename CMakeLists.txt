cmake_minimum_required (VERSION 2.8)
project(test)
aux_source_directory(src DIR_SRCS)
# 指定生成目标
add_executable(test ${DIR_SRCS})