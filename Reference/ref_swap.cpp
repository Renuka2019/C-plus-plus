#include<stdio.h>
#include<stdlib.h>
#include<iostream>


void swap1(int* p1,int* p2);
void swap2(int &ref1,int &ref2);
void test_swap(void);


int main()
{
    test_swap();
    return 0;
}

void test_swap(void)
{
    int a = 10,b = 20;

    printf("value before swap1 : \n a= %d\n b = %d\n",a,b);

    swap1(&a,&b);

    printf("value after swap1 : \n a= %d\n b = %d\n",a,b);

    a = 100;
    b = 200;
    printf("value before swap2 : \n a= %d\n b = %d\n",a,b);

    swap2(a,b);

    printf("value after swap2 : \n a= %d\n b = %d\n",a,b);



}

void swap1(int *p1,int*p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

void swap2(int& ref_a,int& ref_b)
{
    int temp;
    temp = ref_a;
    ref_a = ref_b;
    ref_b = temp;
}