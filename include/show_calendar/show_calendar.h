#ifndef __show_calendar_h__
#define __show_calendar_h__
/********************************************************************************
 * @file show_calendar.h
 * @author lxy (2305195328@qq.com)
 * @brief 显示输出函数
 * @version 1.0.0
 * @date 2022-12-20
 ********************************************************************************/
static char day[7][5] = {"日","一","二","三","四","五","六"};
static int days[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};

/********************************************************************************
 * @brief 输出日历函数，
 * _month表示从那个月开始输出
 * _is_yleap_year表示是否是闰年
 * _year_1_1表示_month月的1月1日是周几
 * @param  _month
 * @param  _is_yleap_year
 * @param  _year_1_1
 ********************************************************************************/
void show_calendar(int _month, bool _is_yleap_year, int _year_1_1)
{
    if(_month > 12)
        return;
    if (_is_yleap_year)
    {
        days[2] = 29;
        _is_yleap_year = false;
    }
    //* 输出表头 月部分
    for(int i = 0; i < 46; i++)
    {
        printf("-");
        if(i == 23)
            printf(">%d月<",_month);
    }
    printf("\n");
    //* 输出表头 天部分
    for(int i = 0; i < 7; i++)
        printf("%s\t",day[i]);
    //* 从周几开始输出
    printf("\n");
    for (int i = 0; i < _year_1_1; i++)
        printf("\t");
    for(int i = 1; i <= days[_month]; i++)
    {
        //* 如果下一天是周日则输出i后换行，反之输出i加制表表
        if((i+_year_1_1)%7)
            printf("%d\t", i);
        else
            printf("%d\n", i);
    }
    printf("\n");
    show_calendar(_month+1,_is_yleap_year,(days[_month]+_year_1_1)%7);
    
}

#endif