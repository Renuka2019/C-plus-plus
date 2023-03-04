#include<cstdio>
#include<cstdlib>
#include<iostream>

class cpp_constant
{
private:
    /* data */
        const int n;
        static const int p;
        int m;
public:
    cpp_constant(int init_n,int init_m):n(init_n)
    {
        m = init_m;
    }
    void modify()
    {
        m = 500;
    }
    void print()
    {
        std::cout<<m<<std::endl;
        std::cout<<n<<std::endl;
        std::cout<<p<<std::endl;
    }
};

class cpp_constant2
{
private:
    /* data */
    int n1;
    int n2;
public:
    cpp_constant2(int init_n1,int init_n2):n1(init_n1),n2(init_n2){}
    int get_n1()const
    {
       // n1 = 500;
        return n1;
    }
    int get_n2()const
    {
        return n2;
    }
    void set_n1(int new_n1)
    {
        n1 = new_n1;
    }
    void set_n2(int new_n2)
    {
        n2 = new_n2;
    }
    
};

const int cpp_constant :: p = 10;

int main(void)
{
    cpp_constant2 obj2(400,500);
    cpp_constant obj(100,200);
    const cpp_constant2 *pobj2 = &obj2;
    obj.print();
    pobj2->get_n1();
    pobj2->get_n2();
    return 0 ;
}