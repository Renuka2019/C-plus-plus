#ifndef _VECTOR2D_H
#define _VECTOR2D_H

#include<string>

class vector_2d
{
private:
    /* data */
    double x,y,z;

public:
    vector_2d();
    vector_2d(double init_x= 0.0,double init_y=0.0,double init_z = 0.0);
    vector_2d add(vector_2d& other);
    vector_2d subtract(vector_2d& other);
    vector_2d scale(double scale);
    double dot_product(vector_2d& other);
    vector_2d cross_product(vector_2d& other);
    vector_2d normalize();
    double mod();
    void show(const std::string &str);
    
};

#endif /*_VECTOR2D_H*/


