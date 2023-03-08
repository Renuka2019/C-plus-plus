#include<cstdio>
#include<iostream>
#include<cstdlib>

using std::cout;
using std::endl;
using std::cin;


struct intptr
{
    int *p_int;
    size_t ref_cnt;
};


class HasPtr
{
    private:
        struct intptr* p_refcount;
        int n;

    public:

        HasPtr(int int_val,int n)
        {
            
            this->p_refcount = new struct intptr;
            this->p_refcount->p_int = new int(int_val);
            this->p_refcount->ref_cnt = 1;
            this->n = n;            
        } 

        HasPtr(const HasPtr& other)
        {

           
                this->n = other.n;
                this->p_refcount = other.p_refcount;
                this->p_refcount->ref_cnt++;     

        }


        HasPtr& operator=(const HasPtr& other)
        {

            this->p_refcount->ref_cnt -= 1;
            if(this->p_refcount->ref_cnt  == 0)
            {
                delete this->p_refcount->p_int;
                delete this->p_refcount;
            }

            this->p_refcount = other.p_refcount;
            this->p_refcount->ref_cnt += 1;
            this->n = other.n;
            return *this;

        }

        ~HasPtr()
        {
           
             if(--this->p_refcount->ref_cnt  == 0)
            {
                delete p_refcount;
               
            }

        }

        int get_n()
        {
            return n;
        }

        void set_in(int new_n)
        {
            n = new_n;
        }

        void set_ptr_val(int new_val)
        {
           *this->p_refcount->p_int = new_val; 
        }

        int get_ptr_val(int new_val)
        {
            return *this->p_refcount->p_int;
        }
        
        size_t get_ref_count()
        {
            return this->p_refcount->ref_cnt;
        }


};



int main()
{
    HasPtr* p1 = new HasPtr(10,100);
    printf("ref_cnt(p1): %lu\n",p1->get_ref_count());
   
    HasPtr* p2 = new HasPtr(*p1);
    printf("ref_cnt(p1): %lu\n",p1->get_ref_count());
   
    HasPtr* p3 = new HasPtr(*p2);
    printf("ref_cnt(p1): %lu\n",p1->get_ref_count());

    delete p1;
    printf("ref_cnt(p2): %lu\n",p2->get_ref_count());

    delete p2;
    printf("ref_cnt(p3): %lu\n",p3->get_ref_count());

    delete p3;
}
