#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "client.h"


stack_t* create_stack(int size)
{
    stack_t *p_stack = (stack_t*)malloc(sizeof(stack_t));
    if(p_stack == NULL)
    {
        puts("Failied to  allocate meemory for stack instance");
        return(NULL);
    }
    memset(p_stack,0,sizeof(stack_t));
    p_stack->arr = (int*)malloc(size*sizeof(int));
    if(p_stack->arr == NULL)
    {
        puts("Failed to allocate memory to internal array");
        free(p_stack);
        p_stack = NULL;
        return(NULL);
    }
    memset(p_stack->arr,0,size*sizeof(int));

    p_stack->size = size;
    p_stack->top = -1;
}

status_t push(stack_t* p_stack,data_t new_data)
{
    p_stack->top++;
    if(p_stack->top == p_stack->size)
    {
        puts("STACK FULL");
        return STACK_FULL;
    }
    
    p_stack->arr[p_stack->top] = new_data;
    return SUCCESS;
}


status_t pop(stack_t* p_stack,data_t* data)
{
    if(is_empty(p_stack) == STACK_EMPTY)
    {
        return STACK_EMPTY;
    }
    *data = p_stack->arr[p_stack->top];
    p_stack->arr[p_stack->top] = 0;
    p_stack->top --;
    return SUCCESS;
}
status_t is_empty(stack_t* p_stack)
{
    if(p_stack->top == -1)
    {
        return(STACK_EMPTY);
    }
    return(SUCCESS);
}

void print_stack(stack_t* p_stack)
{
    int i;
    int s;
    if(is_empty(p_stack) == STACK_EMPTY)
    {
        puts("stack is empty");
        return;
    }

    for(i = 0;i <= p_stack->top;++i)
    {
        printf("p_stack->arr[%d]:%d\n",i,p_stack->arr[i]);
    }
}

void destroy_stack(stack_t **pp_stack)
{
    free((*pp_stack)->arr);
    free(*pp_stack);
    *pp_stack = NULL;
}

