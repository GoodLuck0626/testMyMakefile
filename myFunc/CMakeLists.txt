add_library(myFunc SHARED  myFunc.c)

set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)#设置动态连接库的输出路径