#include<cstdio>
#include<cstdlib>

class class_ref
{
private:
    /* data */
    int day;
    int month;
    int year;

public:
    class_ref( int init_day, int init_month,int init_year);
    void print();

};

class_ref::class_ref(int init_day = 1, int init_month = 1,int init_year = 2023):day(init_day),month(init_month),year(init_year)
{

}

void class_ref::print()
{
    printf("%d-%d-%d\n",this->day,this->month,this->year);
}

int main()
{
    class_ref *p_obj = new class_ref;
    p_obj->print();

    class_ref *p_obj2  = new class_ref(4,3,2023);
    p_obj2->print();

    class_ref* (&ref_today) = p_obj2;
    ref_today->print();

   // delete &ref_today;

    return(0);
}

