#include<iostream>
using namespace std;
class Average
{
public:
    int a,b,c;

    Average(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    float getAverage()
    {
        float avg=(float)(a+b+c)/3;
        return avg;
    }

};
int main()
{
     Average av(10,5,13);
     cout<<"Average="<<av.getAverage();

    return 0;
}
