#include<iostream>
#include<cstdlib>

class static_member
{
private:
    /* data */
    static int n;
    int x;

public:
    static_member(/* args */):n(100){}
    int get_n()
    {
        return n;
    }
    static int getn_static()
    {
        //x = 500;  // compile time error
        return(n);
    }

};

int static_member::n = 200;

int main()
{
    static_member t;
    printf("n = %d\n",static_member::getn_static());
    printf("n= %d\n",t.get_n());
    return 0;
}
