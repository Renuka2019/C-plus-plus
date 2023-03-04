#include<iostream>
#include<string>
#include<cstdio>

using namespace std;



void capacity_function(void);


int main()
{
    string str;
    
    getline(cin,str);

    cout<< "initial string is ";
    cout<<str<<endl;

    //inserting character
    str.push_back('s');

    cout<<"The String after push_back operation is ";
    cout<<str<<endl;

    str.pop_back();

    cout<<"The String after pop_back operation is:";
    cout <<str<<endl;

    capacity_function();

    return 0;

}

void capacity_function(void)
{
    string str;

    getline(cin,str);

    cout<<"initial string is :";
    cout<<str<<endl;

    str.resize(18);

    cout<<"After resize operation is :";
    cout<<str<<endl;

    cout<<"capacity of string is: ";
    cout<<str.capacity()<<endl;

    str.shrink_to_fit();

    cout<<"capacity after shrinking is :";
    cout<<str.capacity()<<endl;

    






}