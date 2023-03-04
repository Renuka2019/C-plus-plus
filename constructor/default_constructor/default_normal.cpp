#include<cstdio>

/* Explicit Assignment*/
class default_normal
{
    private:
    /* data */
    int day;
    int month;
    int year;
    public:
        default_normal();
        void print_data(void);  
}; 

default_normal::default_normal(/* args */)
{
    day = 1;
    month = 1;
    year = 1;
}


void default_normal::print_data(void)
{
    printf("%d-%d-%d",this->day,this->month,this->year);
}


int main(void)
{
    default_normal d1;
    d1.print_data();
}

 
