#include<iostream>
using namespace std;
class Shapes
{
    public:
    float radius;
   float length,bredth;
   int side;
    float getArea(float r)
    {
        radius=r;
        return(3.14*radius*radius);

    }
    float getArea(float b,float h)
    {
        length=b;
        bredth=h;
        return(0.5*length*bredth);
    }
    float getArea(int l,int b)
    {
        length=l;
        bredth=b;
        return(length*bredth);
    }
    int getArea(int s)
    {
        side=s;
        return (side*side);
    }
};
int main()
{
    Shapes t1;
    cout<<"Area of Circle="<<t1.getArea(10)<<endl;
    cout<<"Area of Triangle="<<t1.getArea(10,9)<<endl;
    cout<<"Area of Rectangle="<<t1.getArea(9,5)<<endl;
    cout<<"Area of square="<<t1.getArea(10,5)<<endl;
    return 0;
}
