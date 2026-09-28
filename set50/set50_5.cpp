#include<iostream>
using namespace std;
class Addition
{
    int milimeter,feet,inches,centimeter,meter;
public:
    Addition(){}
    Addition(int m,int f,int i,int c,int mili)
    {
        meter=m;
        feet=f;
        inches=i;
        centimeter=c;
        milimeter=mili;
    }
    void showData()
    {
        cout<<"METER="<<meter<<"  FEET="<<feet<<"  INCHES="<<inches<<"  CENTIMETER="<<centimeter<<"  MILIMETeR="<<milimeter<<endl;

    }
    Addition operator+(Addition se)
    {
        int value1=(meter*1000)+(feet*300)+(inches*25)+(centimeter*10)+milimeter;
        int value2=(se.meter*1000)+(se.feet*300)+(se.inches*25)+(se.centimeter*10)+se.milimeter;
        int sum=(value1+value2);
        Addition distanceSum;
        distanceSum.meter=sum/1000;
        int r1=sum%1000;
        distanceSum.feet=r1/300;
        int r2=r1%300;
        distanceSum.inches=r2/25;
        int r3=r2%25;
        distanceSum.centimeter=r3/10;
        distanceSum.milimeter=r3%10;
        return distanceSum;

    }
};
int main()
{
    Addition a1(4,5,2,3,100),a2(3,4,1,6,500);
    a1.showData();
    a2.showData();

    Addition distSum=a1+a2;
    cout<<"Result is:\n\n\n\n";
    distSum.showData();

    return 0;
}
