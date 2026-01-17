#pragma once

#include <iostream>
using namespace std;
#include <assert.h>

class Date
{
    public:
        Date(int year = 1, int month = 1, int day = 1)
        {
            _year = year;
            _month = month;
            _day = day;
        }

        int get_month_day(int year, int month)
        {
            assert (month >= 1 && month <= 12);
            static int month_day[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if (month == 2 && ((year % 4 == 0 && year % 100 !=0) || (year & 400 == 0)))
            {
                return 29;
            }
            else
            {
                return month_day[month];
            }
        }


        Date& operator+=(int day);
        Date operator+(int day);
	    Date& operator-=(int day);
	    Date operator-(int day);

        int Date::operator-(const Date& d);






        void Print();
    private:
    int _year;
    int _month;
    int _day;



};  