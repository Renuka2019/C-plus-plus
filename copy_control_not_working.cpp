#include <iostream>
#include <cstdlib>

class HasPtr
{
    private:
        int *p;
        int n;

    public:
        HasPtr(int* init_p,int n):p(init_p),n(init n){}

        int get_n() {return n;}
        void set_n(int inew_n ){n = new_n;}
        int* get_p(){return p;}
        int  get_p_val(){return *p;}
        void  set_p_val(int n){*p = n;}

        friend std::ostream& operator<<(std::ostream & out,const HasPtr &other);

        
};

std::ostream& operator<<(std::ostream & out,const HasPtr &other)
{
    out<<"p = "<<other.p<<std::endl;
    out<<"*P = "<<*(other.p)<<std::endl;
    out<<"n = "<<other.n<<std::endl;

    return out;
}
