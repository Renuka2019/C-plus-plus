#ifndef _ISTACK_H
#define _ISTACH_H

#define STACK_FULL 1
#define STACK_EMPTY 0
#define SUCCESS 1



class ISTACK
{
public:
    ISTACK(){}
    virtual int push(int new_data) = 0;
    virtual int pop(int* pop_data) = 0;
    virtual bool is_stack_empty()=0;
    virtual ~ISTACK() = 0;
    static ISTACK* get_stack(int size);
};

#endif