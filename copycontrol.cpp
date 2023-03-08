#include<iostream>
#include<cassert>

using namespace std;

class Date{
    private:
        int day,month,year;
        static bool is_date_valid(int day,int month,int year)
        {
            bool is_year_leap = false;
            if(year %  400 == 0 || (year %100 != 0 && year % 4 == 0))
                is_year_leap = true;

            switch (month)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                /* code */
                if(day >0 && day <32)
                    return true;
                return false;
            case 4:
            case 6:
            case 9:
            case 11:
                if(day >0 && day< 31)
                    return true;
                return false;

            case 2: 
                if(is_year_leap && day >0 && day <30)
                    return true; 
                else if(is_year_leap && day >0 && day < 29)
                    return true;
                else 
                    return false;
            default:
                return false;                          
            
             }
                
        }

    public:
            Date(int init_day,int init_months,int init_year):day(init_day),month(init_months),year(init_year)
        {
            assert(is_date_valid(init_day,init_months,init_year));

        }  

        int get_day()const
        {
            return day;
        } 

        int get_month()const
        {
            return month;
        }

        int get_year()const
        {
            return year;
        }

        void set_day(int new_day)
        {
            assert(is_date_valid(new_day,month,year));
            day = new_day;
        }

         void set_month(int new_month)
        {
            assert(is_date_valid(day,new_month,year));
            day = new_month;
        }

         void set_year(int new_year)
        {
            year = new_year;
        }

        friend ostream& operator <<(ostream &out , Date &other);

};

ostream& operator <<(ostream &out , Date &other)
{
    out<<other.day<<"-"<<other.month<<"-"<<other.year;
    return out;

}


int main()
{
    Date d1(1,2,2000);
    Date d2(d1);
    cout<<"d1: "<<d1<< " " <<"d2: "<<d2<<endl;
    return 0 ;

}