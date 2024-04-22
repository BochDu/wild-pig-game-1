# wild-pig-game-1

## **项目描述**

野猪是人类的好朋友，本项目基于野猪主义出发，搜集民间野猪传说，把野猪与游戏相结合必将成为未来游戏的主旋律。从上手游戏修炼到最后面对二百斤的野猪BOSS，具有极强的可玩性、趣味性。

## **项目描述**

### 文件夹介绍：
1，app：游戏逻辑运行代码
<br />
2，gui：游戏UI交互代码
<br />
3，build：cmake生成目录
<br />
4，prepare：库文源文件，MINGW安装包等
<br />
5，sdl2：SDL库
<br />
6，utils：通用工具代码
<br />
7，resources：音视频资源目录
<br />
8，auto_run.bat：自动化编译运行脚本

### 开发环境：
#### MinGW：
下载MinGW安装管理器（MinGW Installation Manager）并安装MinGW。在安装过程中选择需要的组件，包括GCC编译器等。配置系统环境变量，将MinGW的bin目录添加到系统的PATH变量中。

#### SDL：
SDL（Simple DirectMedia Layer）是一个跨平台的多媒体库，提供了访问音频、键盘、鼠标和图形硬件的功能。你需要下载SDL并配置到你的开发环境中。项目已经移植，且在build目录下存放了SDL2.dll文件。

#### Visual Studio Code：
Visual Studio Code是一个轻量级的跨平台代码编辑器，支持多种编程语言。你可以使用Visual Studio Code来编写和管理你的C语言项目。

## **贡献人员**
**BochDu**

## **更新日志**

### V0.1.0-240421:
建立项目，窗口渲染器的创建销毁，退出窗口

### V0.1.1-240422:
删除build目录下所有文件，注释需要自己填写的编译器路径，脚本自动复制动态库到build

