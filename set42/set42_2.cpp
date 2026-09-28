#include<iostream>
using namespace std;
class Average
{
    int a,b,c;
    float avg;
    public:
           void getData(int x,int y,int z)
           {
               a=x;
               b=y;
               c=z;
           }
           void findAverage()
           {
               avg=(float)(a+b+c)/3;

           }
           void getAverage()
           {
               cout<<"Average="<<avg<<endl;
           }

};
int main()
{
    Average av1;
    av1.getData(10,20,30);
    av1.findAverage();
    av1.getAverage();
    return 0;
}
