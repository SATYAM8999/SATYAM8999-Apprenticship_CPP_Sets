#include<iostream>
#include<math.h>
using namespace std;
class Point1
{
private:
        int x1,y1;
        void getPoint1(int x1,int y1)
        {
            this->x1=x1;
            this->y1=y1;
        }
public:
        void setPoint1(int x1,int y1)
        {
            getPoint1(x1,y1);
        }
        int returnX1()
        {
            return x1;

        }
        int returnY1()
        {
            return y1;
        }
};
class Point2:public Point1
{
private:
        int x2,y2;
        void getPoint2(int x2,int y2)
        {
            this->x2=x2;
            this->y2=y2;
        }
public:
        void setPoint2(int x2,int y2)
        {
            getPoint2(x2,y2);
        }
        int returnX2()
        {
            return x2;

        }
        int returnY2()
        {
            return y2;
        }

        void isParallelToXAxis()
        {
            int yy1=returnY1();
            int yy2=returnY2();
            if(yy1==yy2)
            {
                cout<<"Points are Parallel to X Axis"<<endl;

            }
            else
            {
                cout<<"Points are not Parallel to X axis"<<endl;
            }
        }
};
class Point3:public Point1
{
private:
        int x3,y3;
        void getPoint3(int x3,int y3)
        {
            this->x3=x3;
            this->y3=y3;
        }
public:
        void setPoint3(int x3,int y3)
        {
            getPoint3(x3,y3);
        }
        int returnX3()
        {
            return x3;

        }
        int returnY3()
        {
            return y3;
        }
};
class Point4:public Point3
{
private:
        int x4,y4;
        void getPoint4(int x4,int y4)
        {
            this->x4=x4;
            this->y4=y4;
        }
public:
        void setPoint4(int x4,int y4)
        {
            getPoint4(x4,y4);
        }
        int returnX4()
        {
            return x4;

        }
        int returnY4()
        {
            return y4;
        }
        void getArea()
        {
            int x1=returnX1();
            int y1=returnY1();
            int x2=returnX3();
            int y2=returnY3();
            int x3=returnX4();
            int y3=returnY4();

            int value1=pow(x1-x2,2)+pow(y1-y2,2);
            float a=sqrt(value1);
            int value2=pow(x2-x3,2)+pow(y2-y3,2);
            float b=sqrt(value2);

            int value3=pow(x1-x3,2)+pow(y1-y3,2);
            float c=sqrt(value3);

            if((a+b>c) && (b+c>a) && (a+c)>b)
            {
                cout<<"Triangle is form"<<endl;
                float s=(a+b+c)/2;
                float area=sqrt(s*(s-a)*(s-b)*(s-c));
                cout<<"Area of Triangle is:"<<area<<endl;
            }
            else
            {
                cout<<"Triangle is Not Form "<<endl;
            }

        }
};
int main()
{
    Point2 p2;
    p2.setPoint1(10,10);
    p2.setPoint2(5,10);
    p2.isParallelToXAxis();


    Point4 p4;
    p4.setPoint1(2,2);
    p4.setPoint3(5,2);
    p4.setPoint4(3,6);
    p4.getArea();



    return 0;

}
