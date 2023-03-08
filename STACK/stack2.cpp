#include<iostream>
#include "stack.h"
#include "ISTACK.h"

int push(int new_data)
{
    if(top == size)
    {
        return STACK_FULL;
    }
    top++;
    arr[top] = new_data;
    return SUCCESS;

}
int pop(int* pop_data)
{
    if(is_stack_empty)
    {
        return STACK_EMPTY;
    }
    
    *pop_data = arr[top];
    top--;
    return(SUCCESS);


}

bool is_stack_empty()
{
    if(top == -1)
    {
        return(STACK_EMPTY);
    }
}

 ~STACK()
{
    arr = delete[];
    arr = nullptr;
}

static ISTACK* get_stack(int isize)
{
    STACK *p_stack = new STACK(isize);
    return(p_stack);
}


int main(void)
{
    ISTACK* p_stack = get_stack(10);

    p_stack-> push_back(10);

}