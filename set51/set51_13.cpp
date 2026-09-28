#include<iostream>
using namespace std;
class Points
{
public:int x,y;

     void getData(int x,int y)
     {
         this->x=x;
         this->y=y;
     }
};
class Quadrant:public Points
{
public:

        void isPointLiesOn1Quadrant()
        {
            if(x>0 && y>0)
            {
                cout<<"point  Lies in 1st Quadrant";

            }
            else
            {
                cout<<"Point does not lies in 1st Quadrant";
            }
        }
};
int main()
{
 Quadrant q1;
 q1.getData(4,-4);
 q1.isPointLiesOn1Quadrant();
 return 0;

}

