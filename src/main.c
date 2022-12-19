#include <stdio.h>
#include <stdlib.h>
#include "./leap_year/leap_year.h"
#include "./algorithm_MyWeek/algorithm_MyWeek.h"

/********************************************************************************
 * @brief 判断输入的字符串是否有误，输入正确则返回转换后的整数类型
 *
 * @param  _str
 * @return int
 ********************************************************************************/
int argv2(char *_str)
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

	// //!测试用
	// int a;
	// scanf("%d",&a);
	// int b = ((int)(3.4 + (a - 3) % 12 * 2.6)) % 7;
	// int c = ((int) (3.4 + (3 - a) % 12 * 2.6)) % 7;
	// printf("b:%d\n", b);
	// printf("c:%d\n", c);


	int year = 0;
	if (argc != 2)
	{
		char str[4];
		printf("可接收程序参数(保留4位)main.exe <年份>\n例如main.exe 2022\n");
		printf("\nmethod of application\tmain.exe {year}\nsuh as\tmain.exe 2022\n");
		printf("输入一个值(input):");
		scanf("%s", str);
		str[4] = '\0'; // 防止溢出异常
		year = argv2(str);
		printf("输入年份为(Your input is):%d\n", year);
	}
	else
	{
		argv[1][4] = '\0'; // 防止溢出异常
		year = argv2(argv[1]);
		printf("输入年份为(Your input is): % d\n ", year);
	}
	bool is_yleap_year = func_LeapYear(year);
	int year_1_1  = func_MyWeek(year,is_yleap_year);

	printf("%d年的1月1日是星期%d\n", year, (year_1_1 == 0 ? 7 : year_1_1));
	printf("%d/1/1 = %d\n", year, (year_1_1 == 0 ? 7 : year_1_1));

	return (0);
}