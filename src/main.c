#include <stdio.h>
#include <stdlib.h>
#include "./leap_year/leap_year.h"

/********************************************************************************
 * @brief 判断输入的字符串是否有误，输入正确则返回转换后的整数类型
 * 
 * @param  _str             
 * @return int              
 ********************************************************************************/
int argv2(char **_str)
{

	if (!atoi(_str))
	{
		printf("输入有误,程序退出\n");
		printf("Input error\n");
		exit(1);
	}
	return atoi(_str); // atoi函数为字符串转换整数类型
}

int main(int argc, char **argv)
{
	//? 调试用
	printf("argc:%d\n", argc);
	printf("argv0:%s\n", argv[0]);
	printf("argv1:%s\n", argv[1]);
	// argv[1] = 1952;

	// //? 测试func_LeapYear函数
	// for (int i = 1950; i < 2050; i++)
	// {
	// 	if(func_LeapYear(i))
	// 	// if (func_LeapYear(atoi(argv[1])))
	// 		printf("%d ",i);
	// 	// else
	// 	// 	printf("flase");
	// }
	
	if(argc != 2)
	{
		char str[4];
		printf("可接收程序参数(保留4位)main.exe <年份>\n例如main.exe 2022\n");
		printf("\nmethod of application\tmain.exe {year}\nsuh as\tmain.exe 2022\n");
		printf("输入一个值(input):");
		scanf("%s",str);
		str[4] = '\0'; // 防止溢出异常
		int year = argv2(str);
		printf("输入年份为(Your input is):%d\n", year);
	}
	else
	{
		argv[1][4] = '\0'; // 防止溢出异常
		int year = argv2(argv[1]);
		printf("输入年份为(Your input is): % d\n ", year);
	}

	printf("--test--\n");
	return (0);
}