#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

struct Date
{
    int day;
    int month;
    int year;
};



int main()
{ 
    struct Date *p_date = NULL;

    p_date = (struct Date*)malloc(sizeof(struct Date));
    assert(p_date != NULL);
    p_date->day = 28;
    p_date->month = 02;
    p_date->year = 2023;


    printf("%d-%d-%d\n",p_date->day,p_date->month,p_date->year);

    free(p_date);

    p_date = NULL;

    exit(EXIT_FAILURE);

}