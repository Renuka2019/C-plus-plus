#ifndef _STACK_H
#define _STACK_H

#define TRUE 1
#define FALSE 0
#define STACK_EMPTY 0
#define STACK_FULL 1
#define SUCCESS 1



typedef int status_t;
typedef int data_t;
typedef struct stack stack_t;

struct stack
{
    int *arr;
    int size;
    int  top;
};


stack_t* create_stack(int size);

status_t push(stack_t* p_stack,data_t new_data);
status_t pop(stack_t* p_stack,data_t* data);
status_t is_empty(stack_t* p_stack);
void print_stack(stack_t* p_stack);
void destroy_stack(stack_t **pp_stack);


#endif /*_STACK_H*/