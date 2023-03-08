#include<cstdio>
#include<cstdlib>
#include<iostream>

class Base
{
private:
    /* data */
    int a;
    float b;
protected:    
    
    double d;

public:
    Base(/* args */):a(0),b(0.0f),d(0.0){}
    Base(int i, float j,double k):a(i),b(j),d(k){}
    int get_a()const{return a;}
    float get_b()const{return b;}
    double get_d()const{return d;}
    void set_a(int new_int){a = new_int;}
    void set_b(float new_float){b = new_float;}
    friend std::ostream& operator<<(std::ostream &out,Base &other);
    ~Base(){}

};

std::ostream& operator<<(std::ostream &out,Base &other)
{
    out<<"mebers of base : a:"<<other.a<<"b :"<<other.b<<"d: "<<other.d<<std::endl;
    return out;
}

class Derived: public Base
{
private:
    int i;
    int j;
    int k;
    /* data */
public:
    Derived(/* args */):i(0),j(0),k(0){}
    Derived(int x,int y, int z):i(x),j(y),k(z){}
    ~Derived(){}
};

class Derived_2 :public Derived
{
private:
    /* data */
    float l;
public:
    Derived_2(/* args */):l(0){}
    ~Derived_2(){}
};

int main()
{
    Base b(1,3.4f,3.6);
    Derived d(5,7,8);
    int i = d.get_a();
    
    printf("i = %d\n",i);    
    std::cout<<b;
}



