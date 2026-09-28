#include<iostream>
using namespace std;
class PI
{
private:
        float pi;
        void getPI(float pi)
        {
           this-> pi=pi;
        }
public:
       void setPI(float x)
       {
           getPI(x);
       }
       float returnPI()
       {
           return pi;
       }
};
class Area:public PI
{
    private:int red;
            void getred(int x)
            {
                red=x;

            }
    public:
            void setred(int x)
            {
               getred(x);
            }
            int returnRed()
            {
                return red;
            }
            float getArea()
            {
                float pi=returnPI();
                float area=pi*red*red;
                return area;
            }
};
class Circumference:public PI
{
private:int red;
        void getred1(int x)
        {
           red=x;

        }
    public:
        void setred1(int x)
            {
               getred1(x);
            }
        float getCircumference()
        {

            float pi=returnPI();
            float circum=(float)2*pi*red;
            return circum;
        }
};
int main()
{
    Area a1;
    a1.setPI(3.14);
    a1.setred(5);
    cout<<"Area"<<a1.getArea()<<endl;

    Circumference cir;
    cir.setPI(3.14);
    cir.setred1(5);
    cout<<"Circumference of Circle is:"<<cir.getCircumference()<<endl;


}
