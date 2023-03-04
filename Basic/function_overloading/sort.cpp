#include <stdio.h>
#include <stdlib.h>

void sort(int *p,size_t n);
void sort(double*p,size_t n);
void show(int *p ,size_t n,const char* msg);
void show(double *p ,size_t n, const char* msg);


int main()
{
    int a[10] = {21,345,67,89,32,45,22,56,87,11};
    double d[5]  = {1.1,34.56,67.89,4.3,6.7};

    show(a,10,"Before sort");
    sort(a,10);
    show(a,10,"after sort");
   
    show(d,5,"before sort");
    sort(d,5);
    show(d,5,"after sort");
    return 0;

}

void sort(int*p,size_t n)
{
    int i,j,key;
    for(j = 1;j < n;++j)
    {
         key = p[j];
         i = j-1;

         while(i>-1 && p[i] > key)
         {
            p[i+1] = p[i];
            i = i-1;
         }
         p[i+1] = key;
   
}
}


void sort(double *p,size_t n)
{
    int i, j; 
    double key;

    for(j = 1;j<n;++j)
    {
        key = p[j]; 
        i  = j-1;
        while(i>-1 && p[i] > key)
        {
            p[i+1] = p[i];
            i  = i-1;
        }
        p[i+1] = key;
    }
    
  
}


void show(int *p ,size_t n,const char* msg)
{
    if(msg)
    {
        puts(msg);
    }
    int i;
    for(int i = 0;i<n;++i)
    {
        printf("p[%d]:%d\n",i,p[i]);
    }
}


void show(double *p ,size_t n, const char* msg)
{
    if(msg)
    {
        puts(msg);

    }
    int i;
    for(int i = 0;i<n;++i)
    {
        printf("p[%d]:%lf\n",i,p[i]);
    }


}