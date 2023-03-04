#include <cstdio>
#include "date.h"

int main(void)
{
    Date date_object(1,3,2023);
    int day = date_object.get_day();
    int month = date_object.get_month();
    int year = date_object.get_year();

    printf("%d-%d-%d\n",day,month,year);
    date_object.set_day(2);
    date_object.set_month(3);
    date_object.set_year(2023);
    
    day = date_object.get_day();
    month = date_object.get_month();
    year = date_object.get_year();
    printf("%d-%d-%d\n",day,month,year);

    return 0;

}