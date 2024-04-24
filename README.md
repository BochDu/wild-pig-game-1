# wild-pig-game-1

## **项目描述**

野猪是人类的好朋友，本项目基于野猪主义出发，搜集民间野猪传说，把野猪与游戏相结合必将成为未来游戏的主旋律。从上手游戏修炼到最后面对二百斤的野猪BOSS，具有极强的可玩性、趣味性。

## **工程目录**

### 文件夹介绍：
- app：游戏逻辑运行代码
- gui：游戏UI交互代码
- build：cmake生成目录
- prepare：cmake包，mingw安装包
- 3rd/SDL：克隆SDL源码存放目录
- utils：通用工具代码
- resources：音视频资源目录
- auto_run.bat：WIN编译运行脚本
- auto_run.sh：LINUX编译运行脚本

### 开发环境：

#### CMake：
CMake是一个跨平台的开源构建系统，用于管理软件构建过程。通过 CMakeLists.txt 文件生成构建。

#### MinGW：
下载MinGW安装管理器（MinGW Installation Manager）并安装MinGW。在安装过程中选择需要的组件，包括GCC编译器等。配置系统环境变量，将MinGW的bin目录添加到系统的PATH变量中。

#### SDL：
SDL（Simple DirectMedia Layer）是一个跨平台的多媒体库，提供了访问音频、键盘、鼠标和图形硬件的功能。使用 git submodel 进行加载。

#### Visual Studio Code：
Visual Studio Code是一个轻量级的跨平台代码编辑器，支持多种编程语言。你可以使用Visual Studio Code来编写和管理你的C语言项目。

### 编译运行：

#### Step1： 加载 git submodel

```bash
git submodule update --init --recursive
```

#### Step2： 编译 运行

##### A： auto_run 脚本
###### WIN 环境
```bash
.\auto_run.bat
```
###### LINUX 环境
```bash
chmod +x auto_run.sh
./auto_run.sh
```

##### B： CMake
```bash
mkdir build
cd build
cmake ../
make pig
```
```bash
./pig
```

## **贡献人员**
**BochDu**

**Zidong Fang**

## **更新日志**

### V0.1.2-240424：
修改cmake配置，将SDL源码作为git submodule引入，使得SDL可以随项目一起编译
添加.gitignore忽略不必要的文件
删除不必要的文件

### V0.1.1-240422：
删除build目录下所有文件，注释需要自己填写的编译器路径，脚本自动复制动态库到build

### V0.1.0-240421：
建立项目，窗口渲染器的创建销毁，退出窗口

