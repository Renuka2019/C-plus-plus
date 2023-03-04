#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"client.h"



int main(void)
{
    stack_t *p_stack = create_stack(10);
    int i = 0;
    data_t data;
    status_t s;
    assert(p_stack != NULL);

   // assert((s = is_empty(p_stack)) != STACK_EMPTY);
    for(i = 0;i<p_stack->size;++i)
    {
        s = push(p_stack,(i+1)*10);
        //assert(s != STACK_FULL);
    }
    print_stack(p_stack);
    s = push(p_stack,110);
    assert(s != STACK_FULL);
    
    s = pop(p_stack,&data);
    printf("pop data is %d\n",data);
    print_stack(p_stack);

  

    return 0;

}
