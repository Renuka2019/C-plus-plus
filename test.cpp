#include<cstdio>
#include<cstdlib>

class test
{
private:
    /* data */
    int i,j,k;
public:
    test(/* args */);
    test(int init_i,int init_j,int init_k = 0.0);
    void print();
}; 

test::test(/* args */):i(0.0),j(0.0),k(0.0)
{

}
test :: test(int init_i,int init_j,int init_k): i(init_i),j(init_j),k(init_k)
{

}
void test:: print()
{
    printf("i = %d,j= %d,k = %d\n",this->i,this->j,this->k);
}

int main()
{
    test t(2,3);
    t.print();
}

