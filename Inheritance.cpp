#include<iostream>
#include<stdexcept>

class Qudrilatral
{
    private:
        double a,b,c,d;

    public:
        Qudrilatral(double init_a, double init_b, double init_c, double init_d)
        {
            if(init_a + init_b +init_c <= init_d ||
                init_a +init_b + init_d <= init_c ||
                init_a+ init_c + init_d <= init_b ||
                 init_b+ init_c + init_d <= init_a)
                 throw std::out_of_range("Bad sides of quadrilatreial");
        }


    double area() const
    {
        double  s = perimeter/2;
        return sqrt((s-a)*(s-b)*(s-c)*(s-d));

    }

    double perimeter() const{
        return(a+b+c+d);

    }

    friend std::ostream& operator<<(std::ostream &out ,const Qudrilatral Q);

};


 std::ostream& operator<<(std::ostream &out ,const Qudrilatral Q)
 {
    out<<"s1"<<a<<"s2"<<b<<"s3"<<c<<"s4"<<d<<endl;
    return out;
 }

 class square:public Qudrilatral
 {
    private:
        double s;

    public:
        square(double init_s):Qudrilatral(init_s,init_s,init_s,init_s)
        {

        }

        double area() const{
            return s*s;

        }
       
        double get_diagonal()const{
            sqrt(2)*s;

        }

 }