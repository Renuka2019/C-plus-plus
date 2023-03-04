#include<stdio.h>
void test_function(void);
void do_pointer_and_const_analysis(void);

 const int cg_num = 100;     /*read only data section*/

 int main()
 {
    const int cl_num = 1000;

    int* pcg_num = &cg_num;
    int* pcl_num = &cl_num;
    *pcl_num = 2000;


    //*pcg_num = 200;
    printf("value of pcl_num = %d ",*pcl_num);
    //cg_num = 200;
    //cl_num = 2000;
    //test_function();
    do_pointer_and_const_analysis();

    return 0;
 }

 void test_function(void)
 {
    static const int clnum = 100;  /* read only data section*/
    int *p = &clnum;

    printf("*p = %d\n",*p);
    *p = 100;
    printf("*p = %d\n",*p);
 }


 void do_pointer_and_const_analysis(void)
 {
    static const int n1 = 100;
    int n2 = 200;

    const int *p = &n2;

    //*p = 200;

    p = &n1;
    //*p = 2000;

    /* pointer which is constant */
    int* const p2  = &n2;

    *p2 = 200;
    printf("p2 = %d\n",*p2);

//    p2 = &n1;   // error;

    const int n4 = 5;

    int* const cp4 = &n4;
    *cp4 = 500;
    printf("value of cp4  is %d\n",*cp4);
    printf("value of n4  is %d\n",n4);

    const int* const cp5 = &n2;
    (*cp5) = 500;


    static const int*cp6 = &n2;
    *cp6 = 10000;








 }