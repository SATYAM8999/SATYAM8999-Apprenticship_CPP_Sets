#include<iostream>
using namespace std;
class Base
{
    private:int base;
            void getBase(int x)
            {
                base=x;
            }
    public:void set_Base(int x)
           {
               getBase(x);
           }
           int return_Base()
           {
               return base;
           }
};
class Height
{
    private:int height;
            void getHeight(int y)
            {
                height=y;
            }
    public:
           void set_Height(int y)
           {
               getHeight(y);
           }
           int return_Height()
           {
               return height;
           }
};
class Area:public Base,public Height
{
public:
        float findArea()
        {
            int tempb=return_Base();
            int temph=return_Height();
            float area=(float)(0.5)*tempb*temph;
            return area;
        }
};

int main()
{
    Area a1;
    a1.set_Base(20);
    a1.set_Height(3);
    cout<<"Area of Triangle is:"<<a1.findArea()<<endl;
    return 0;
}

