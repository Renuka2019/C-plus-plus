#include<iostream>

using namespace std;

#define N 3
#define M 3
class matrix
{
    private:
        int a[M][N];
    public:
        friend istream& operator>>(istream &in,matrix &m);
        friend ostream& operator<<(ostream &out,matrix &m);
        int& operator()(int,int);        
};

  istream& operator>>(istream &in,matrix &m)
 {

    for(int i = 0;i<M;i++)
    {
        for(int j = 0;j<N;j++)
        {
          
            cin>>m(i,j);
        
        }
        cout<<endl;
    }
    return cin;
    
 }

 ostream& operator<<(ostream &out,matrix &m)
{
    for(int i = 0;i<M;++i)
    {
        for(int j = 0;j<N;++j)
        {
            out<<m(i,j)<<" ";
        }
        out<<endl;
    }
    return out;
    

}

int& matrix ::operator()(int i,int j)
{
    return(a[i][j]);

}

    
int main()
{
    matrix m;
    cout<<"input matrix :"<<endl;
   cin>>m;
   cout<<"output matrix : "<<endl;
   cout<<m;
    return 0;
}