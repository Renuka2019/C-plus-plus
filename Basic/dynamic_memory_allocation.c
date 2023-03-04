#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
    int *p = NULL;

    p = (int*) malloc (sizeof(int));

    memset(p,0,sizeof(int));

    *p = 5000;

    printf("*p = %d\n",*p);

    free(p);
    
    p = NULL;

    return 0;

}