#include <iostream>
#include<cstdlib>

class Test
{
   private:
        char ch;
        int i;
        float f;

    public:
        Test (char init_c,int init_n,float init_f):ch(init_c),i(init_n),f(init_f){}

        int get_n()
        {
            return i;
        }
        void set_n(int new_n)
        {
            i = new_n;
        }

        static int compute(int n1,int n2,int n3)
        {
            return(n1-n2+n3);
        }
      

};

int main()
{
    Test t('A',100,2.14f);
    t.get_n();
    t.set_n(200);

    int retsult = Test::compute(10,20,30);
    printf("result is %d\n",retsult);
    retsult= t.compute(10,20,30);
}