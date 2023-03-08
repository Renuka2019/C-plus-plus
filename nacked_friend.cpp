#include<cstdio>
#include<cstdlib>
#include<iostream>

//void fun4();
class Demo
{
    private:
        void fun3()
        {
            std::cout<<"in fun3()"<<std::endl;
        }
        friend void fun4();
    protected:
        void fun2()
        {
            std::cout<<"in fun2()"<<std::endl;
        }
    public:
        void fun1()
        {
            std::cout<<"in fun3()"<<std::endl;
        }        

};

void fun4()
{
    Demo obj;
    obj.fun3();
    obj.fun2();
    obj.fun1();
}


int main()
{
    fun4();
    return 0;
}