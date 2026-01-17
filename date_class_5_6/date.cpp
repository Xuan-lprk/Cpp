#pragma once
#include "date.h"

Date& Date::operator+=(int day)
{
    if (day < 0)
    {
        return *this -= -day;
    }
    
    _day += day;
    while (_day > get_month_day(_year, _month))
    {
        _day -= get_month_day(_year, _month);
        ++_month;
        if (_month == 13)
        {
            _year++;
            _month = 1;
        }
    }

    return *this;
}

Date Date::operator+(int day)
{
    Date tmp(*this);
    tmp += day;

    return tmp;
}

Date& Date::operator-=(int day)
{
    _day -= day;
    while (_day <= 0)
    {
        --_month;
        if (_month == 0)
        {
            _year--;
            _month = 12;
        }
        _day += get_month_day(_year, _month);

    }
    return *this;
}

Date Date::operator-(int day)
{
    Date tmp(*this);
    tmp -= day;
    return tmp;
}

int Date::operator-(const Date& d)
{
    int flag = 1;
    Date max = *this;
    Date min = d;
    if (*this < d)
    {
        max = d;
        min = *this;
        flag = -1;
    }
    int days_add = 0;
    while (min != max)
    {
        ++min;
        ++days_add;
    }
    return days_add * flag;
}

void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}






