#include<cstdio>
#include<cstring>

class T
{
    private:
        int i;
        float f;
        char c;
    
    public:
         T(int init_i = 0,float init_f= 0.0f,char init_c = 'a'): i(init_i),f(init_f),c(init_c){}
         int get_i();
         float get_f();
         char get_c();

};

class T2
{
private:
    /* data */
    int i;
    
public:
   T t1;
   int get_i();
   T get_T();
  
};



int T2::get_i()
{
    return(this->i);
}
 T T2::get_T()
 {
    return(this->t1);
 }

int T:: get_i()
{
    return(this->i);

}
float T:: get_f()
{
    return(this->f);

}
char T:: get_c()
{
    return(this->c);

}

int main(void)
{
    
    //class T t;
    class T t3(11,1.2f,'r');
   // class T2 t2;
    
   
   /* int i = t.get_i();
    float f = t.get_f();
    char c = t.get_c();
    */
   // printf("i  =  %d\t f = %f \t c = %c\n",i,f,c);
   // int i2 = t2.get_i();
    //T t1 = t2.get_T();
    //printf("i2 = %d\n t2.t1.i = %d",i2,t2.t1.get_i());
    
    int i = t3.get_i();
    float f = t3.get_f();
    char c = t3.get_c();
    printf("i  =  %d\t f = %f \t c = %c\n",i,f,c);

    return 0;

     
}