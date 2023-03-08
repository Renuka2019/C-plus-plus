#include<cstdlib>
#include<cstdio>


class vector2d
{
    private:
        double x,y;

    public:
        
        vector2d(double init_x = 0.0,double init_y = 0.0):x(init_x),y(init_y) {}   
        
        vector2d operator+(vector2d &other)
        {
            vector2d *vec_sum = new vector2d(0.0,0.0);
            vec_sum->x = x +other.x;
            vec_sum->y = y +other.y;
            return(*vec_sum);

        }

        bool operator==(vector2d &other)
        {
            if(x == other.x && y == other.y)
            {
                return true;
            }
            return false;
        }

        vector2d operator--()
        {
           
             --x;
             --y;
            return(*this);
        }



        void print()
        {
            printf("(%.3lf)i+(%.3lf)j\n",x,y);
        }
};

int main()
{
    vector2d v1(1.1,2.2);
    v1.print();
    vector2d v2(1.1,2.2);
    if(v1 == v2)
    {
        printf("vectors are equal\n");
    }
    else
    {
        printf("vectors are not equal\n");
    }


    --v2;
    v2.print();

    vector2d vsum  = v1 +v2;
    vsum.print();
}