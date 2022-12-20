#ifndef __leap_year_h__
#define __leap_year_h__
/********************************************************************************
 * @file leap_year.h
 * @author lxy (2305195328@qq.com)
 * @brief 闰年头文件定义和实现
 * @version 1.0.0
 * @date 2022-12-19
 ********************************************************************************/
#include <stdbool.h>

/********************************************************************************
 * @brief 接受一个int类型值判断是否是闰年,真返回true反之返回false
 * 这个值通常来自argv
 * 
 * @param  _year            
 * @return true             
 * @return false            
 ********************************************************************************/
bool func_LeapYear(int _year)
{
    //*判断_year是否能被400整除
    if (!(_year % 400))
        return true;
    //*判断_year是否能被4整除，且不能被100整除
    else if(!(_year % 4) && _year % 100)
        return true;
    return false;
}

#endif