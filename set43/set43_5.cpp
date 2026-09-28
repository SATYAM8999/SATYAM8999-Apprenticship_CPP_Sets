#include<iostream>
using namespace std;

class Date
{

     public:
         int year;
         int month;
         int days,week;
     void getData(int y,int m,int w,int d)
     {
         year=y;
         month=m;
         week=w;
         days=d;

     }
     void display()
     {
         cout<<"Year ="<<year<<"Month="<<month<<"Week="<<week<<"Days="<<days<<endl;
     }
    Date getSum(Date d1,Date d2)
     {

         int value1=(d1.year*365)+(d1.month*30)+(d1.week*7)+(d1.days);
         int value2=(d2.year*365)+(d2.month*30)+(d2.week*7)+(d2.days);
         int dayssum=value1+value2;
         Date sum;
         cout<<"Addition="<<dayssum<<endl;
         sum.year=dayssum/365;
         int r1=dayssum%365;
         sum.month=r1/30;
         int r2=r1%30;
         sum.week=r2/7;
          sum.days=r2%7;

         cout<<"YEAR ="<<sum.year<<endl;
         cout<<"month ="<<sum.month<<endl;
         cout<<"week ="<<sum.week<<endl;
         cout<<"days ="<<sum.days<<endl;

          return sum;
     }

};

int main()
{

    Date dt1,dt2;
    dt1.getData(3,11,23,2);
    dt2.getData(2,4,23,2);
    dt1.display();
    dt2.display();

    cout<<"----------------------------------"<<endl;
    Date sum=dt1.getSum(dt1,dt2);
    sum.display();
    return 0;


}
