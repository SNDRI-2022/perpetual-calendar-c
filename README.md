# perpetual-calendar-c

## 项目说明

c语言作业，远程仓库用于保存
使用Make编译工具

- 语言版本 c99
- 编辑器 Visual Studio Code
- 编译器gcc(MinGW64)

``` txt
perpetual-calendar-c    //项目目录
├─ .vscode      //vscode配置文件目录
│  ├─ launch.json
│  ├─ settings.json
│  └─ tasks.json
├─ include      //公共头文件目录
│  └─ leap_year //某个功能的定义和实现目录
│     ├─ leap_year.c
│     └─ leap_year.h    
├─ Makefile     //make文件
├─ output
│  └─ main.exe  //输出的可执行文件
├─ README.md    //帮助文档
└─ src          //源文件目录
   └─ main.c    //主函数源文件
```

### 编译和运行

用make进行
详细配置文件在[Makefile](Makefile)中

用gcc进行
在项目目录右键打开终端 或 使用终端进入项目目录`cd perpetual-calendar-c`

```powshell
gcc -g .\src\main.c -I .\include -o .\output\main.exe; .\output\main.exe 
```

#### windows

1. windows中需要安装MinGW64
2. 打开终端(powershell或cmd)进入项目目录`cd perpetual-calendar-c`输入`MinGW32-make run`进行编译链接并运行

单编译只需要输入`MinGW32-make`

清除输出编译文件和输出文件只需要输入`MinGW32-make clean`

#### Linux和苹果系统

1. 打开终端进入项目目录`cd perpetual-calendar-c`输入`make run`进行编译链接并运行

单编译只需要输入`make`

清除输出编译文件和输出文件只需要输入`make clean`
