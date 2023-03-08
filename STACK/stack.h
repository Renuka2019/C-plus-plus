#ifndef  _STACK_H
#define _STACH_H


class STACK : public ISTACK
{
 private:
    int* arr;
    int size;
    int top;   
public:
    STACK(int isize):arr(new int[size]),size(isize),top(-1){}
    int push(int new_data);
    int pop(int* pop_data);
    bool is_stack_empty();
    ~STACK();
    static ISTACK* get_stack(int size);
};


#endif