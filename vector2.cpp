#include<iostream>
#include<vector>
using namespace std;


struct demo 
{
    int i;
    float j;
};

ostream& operator<<(ostream& out,vector<demo*> &other)
{
    for(auto i : other)
    {
       out<<i->i<<" "<<i->j<<endl;
    }
    return(out);

}

ostream& operator<<(ostream& out,vector<int*> &other)
{
    for(auto i : other)
    {
       out<<*i<<endl;
    }
    return(out);

}
int main()
{
    vector<demo*> g1;
    vector<int*> ptr;


    for(int i = 0;i<= 5;++i)
    {
        demo *d = new demo;
        int*  p = new int(i);
        d->i = i;
        d->j = i+1;
        g1.push_back(d);
        ptr.push_back(p); 
    }

    cout<<"output of begin and end: ";
    cout<<g1;
    cout<<ptr;
    
    


    
}