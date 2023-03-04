 #include"date.h"       
        
Date::Date(int init_day,int init_months,int init_year)
{
    this->day = init_day;
    this->month = init_months;
    this->year = init_year;

}

int Date::get_day()const
{
    return day;

}

int Date::get_month()const
{
    return month;

}

int Date::get_year()const
{
    return year;

}

bool Date::set_day(int new_day)
{
    day = new_day;
    return true;
}

bool Date::set_month(int new_month)
{
    month = new_month;
    return true;

}

bool Date::set_year(int new_year)
{
    year = new_year;
    return true;

}