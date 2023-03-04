#include<cstdio>
#include<cstdlib>



class T{
    private:
            int n1;
            mutable int n2;

    public:  
            T():n1(100),n2(200){}
            int get_n1()const{
                //const_cast<T*>(this)->n2 = 300;
                n2 = 400;
                return n2;
            }

};

int main()
{
    T t;
    int i = t.get_n1();
    printf("i = %d\n",i);
    return 0;
}