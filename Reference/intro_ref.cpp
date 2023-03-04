#include<cstdio>
#include<cstdlib>


int n =10;

int &ref_n = n;

int main()
{
    printf("ref_n = %d\n",ref_n);
    ref_n = 20;
    printf("value of n is %d\n",n);
    return 0;
}