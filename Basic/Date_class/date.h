#ifndef _DATE_H
#define _DATE_H

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        Date(int init_day,int init_months,int init_year);
        int get_day()const;
        int get_month()const;
        int get_year()const;
        bool set_day(int new_day);
        bool set_month(int new_month);
        bool set_year(int new_year);

};

#endif /* _DATE_H */