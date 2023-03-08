#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include"vector_2d.h"

vector_2d:: vector_2d(/* args */):x(0.0),y(0.0),z(0.0){}

 
vector_2d:: vector_2d(double init_x,double init_y,double init_z):x(init_x),y(init_y)
 {


 }

vector_2d vector_2d :: add(vector_2d& other)
{
    return vector_2d(x+other.x , y+other.y);

}

vector_2d vector_2d :: subtract(vector_2d& other)
{
    return vector_2d(x - other.x , y- other.y);

}

vector_2d vector_2d :: scale(double scale)
{
    return vector_2d(scale*x,scale*y);

}

 double vector_2d:: dot_product(vector_2d& other)
{
     return(x*other.x , y *other.y);

}

vector_2d vector_2d :: cross_product(vector_2d& other)
{
   
    return vector_2d(0.0,x*other.y , y*other.x);


}

vector_2d vector_2d:: normalize()
{
    double v_mod = this->mod();
    return vector_2d(x/v_mod,y/v_mod);

}

double vector_2d:: mod()
{
    return(sqrt(x*x +y*y));

}

void vector_2d:: show( const std::string &str)
{

    std::cout<<str<<std::endl;

    if(z == 0)
    {
        printf("(%.3lf)i + (%.3lf)j\n",x,y);
    }
    else
    {
         printf("(%.3lf)i + (%.3lf)j + (%.3lf)k\n",x,y,z);
    }

}
    