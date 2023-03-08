#include<cstdio>
#include<cstdlib>
#include<string>
#include"vector_2d.h"


int main(void)
{
    vector_2d v1(3.5,2.1);
    v1.show(std::string ("v1:"));
    vector_2d v2(9.3,4.3);
    v2.show("v2:");

    vector_2d  v_sum = v1.add(v2);
    v_sum.show(std::string ("vsum:"));

    vector_2d v_sub = v1.subtract(v2);
    v_sub.show(std::string ("vsub:"));

    vector_2d v_scaled = v1.scale(2);
   v_scaled.show(std::string ("vscaled"));

    vector_2d v_cross_product = v1.cross_product(v2);
    v_cross_product.show(std::string ("v_cross_product"));

    //vector_2d v_dot = v1.dot_product(v2);
    //v_dot.show(std::string ("v_dot"));

    double v1_mod  = v1.mod();
    double v2_mod = v2.mod();

    printf("v1_mod:%lf\n v2_mod:%lf\n");
    return(0);

}