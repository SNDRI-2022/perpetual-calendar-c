# perpetual-calendar-c

[远程创建项目地址](https://github.com/SNDRI-2022/perpetual-calendar-c)

## 项目说明

c语言作业，远程仓库用于保存
使用Make编译工具

- 语言版本 c99
- 编辑器 Visual Studio Code
- 编译器gcc(MinGW64)

```txt
perpetual-calendar-c    //项目目录
├─ .vscode     //vscode配置文件
│  ├─ launch.json
│  ├─ settings.json
│  └─ tasks.json
├─ include     //公共头文件目录
│  ├─ algorithm_MyWeek     //判断某年的1月1日是星期几
│  │  ├─ algorithm_MyWeek.c
│  │  └─ algorithm_MyWeek.h
│  ├─ leap_year      //判断是否是闰年
│  │  ├─ leap_year.c
│  │  └─ leap_year.h
│  └─ show_calendar     //输出日历函数
│     ├─ show_calendar.c
│     └─ show_calendar.h
├─ Makefile    //make配置文件
├─ output      //输出的可执行文件目录
│  └─ main.exe
├─ README.md      //帮助文档
└─ src      //源文件目录
   ├─ main.c
   └─ main.o

```

### 编译和运行

用make进行
详细配置文件在[Makefile](Makefile)中

用gcc进行
在项目目录右键打开终端 或 使用终端进入项目目录`cd perpetual-calendar-c`

```powshell
gcc -std=c99 -g .\src\main.c -I .\include -o .\output\main.exe; .\output\main.exe
或直接运行可执行文件
.\output\main.exe
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

## 设计说明

程序设计步骤和思路

### main.c主文件说明

从main函数开始第一行的`system("chcp 65001");`语句让c语言程序支持输出中文

![main.c图](https://github.com/SNDRI-2022/perpetual-calendar-c/blob/main/img/code-main.png)
