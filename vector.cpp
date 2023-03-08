#include <iostream>
#include <vector>


using namespace std;


int main()
{
    vector<int> g1;

    for(int i = 0;i<= 5;++i)
        g1.push_back(i);

     cout<<"output of begin and end:";
     for(auto i = g1.begin();i != g1.end();++i)
        g1.push_back(i);

     cout<< "output of begin and end :";
     for(auto i = g1.cbegin();i!=g1.cend;++i)
     cout<<*i<< "";


}