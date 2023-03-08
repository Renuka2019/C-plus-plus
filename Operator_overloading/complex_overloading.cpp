#include<iostream>

using namespace std;


class complex_overloading
{
private:
    /* data */
    int real, imag;
public:
    complex_overloading(int r = 0,int i = 0)
      {  real = r;   imag = i; }
  friend ostream & operator << (ostream &out, const complex_overloading &c);
 friend istream & operator >> (istream &in, complex_overloading &c);

};


ostream & operator << (ostream &out, const complex_overloading &c)
{
    out<<c.real;
    out<<"+i"<<c.imag<<endl;
    return out;
}


istream & operator >> (istream &in, complex_overloading &c)
{
    cout<<"enter real part";
    in>>c.real;
    cout<<"Enter imaginary part";
    in>>c.imag;
    return in;

}

int main()
{
    complex_overloading c(2,4);
    cin>>c;
    cout<<"the complex object is ";
    cout<<c;
}



