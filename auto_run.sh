#!/bin/bash

# 获取CMake路径
CMAKE_PATH=$(command -v cmake)

# 检查是否找到CMake
if [ -z "$CMAKE_PATH" ]; then
    echo "Error: CMake not found. Please make sure CMake is installed and in your PATH."
    exit 1
else
    echo "Found CMake at: $CMAKE_PATH"
fi

# 获取项目路径
PROJECT_PATH=$(pwd)
export PROJECT_PATH="$PROJECT_PATH"

# 指定构建目录
BUILD_DIR="$PROJECT_PATH/build"

# 检查构建目录是否存在，如果不存在则创建
if [ ! -d "$BUILD_DIR" ]; then
    mkdir -p "$BUILD_DIR"
fi

# 切换到指定目录
cd "$PROJECT_PATH/build"

# 运行CMake构建
"$CMAKE_PATH" cmake ../
make pig

# 检查构建是否成功
if [ -f "pig" ]; then
    ./pig
else
    echo "构建失败，请检查错误信息。"
fi

# 完成后暂停窗口
read -p "Press any key to continue..."