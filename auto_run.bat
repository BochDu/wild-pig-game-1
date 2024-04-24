@echo off

rem 设置CMake路径
set CMAKE_PATH=C:\cmake-3.29.2-windows-x86_64\bin\cmake.exe

rem 寻找项目路径
set "PROJECT_PATH=%CD%"
setx PROJECT_PATH "%PROJECT_PATH%" > nul

rem 切换到指定目录
cd %PROJECT_PATH%\build

rem 运行CMake构建
"%CMAKE_PATH%" --build .

rem 检查构建是否成功
if %errorlevel% neq 0 (
    echo create pig.exe fail
) else (
    rem 检查操作系统是否为 Windows
    if "%OS%"=="Windows_NT" (
        rem 复制可执行文件依赖库
        copy "%PROJECT_PATH%\build\3rd\SDL\SDL2d.dll" "%PROJECT_PATH%\build\" > nul
    )

    rem 生成pig.exe
    .\pig.exe
)

rem 完成后暂停窗口
pause
