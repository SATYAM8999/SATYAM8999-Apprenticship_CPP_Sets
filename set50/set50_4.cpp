#include<iostream>
#include<math.h>
using namespace std;
class Time
{
    int hour,minute,second;
public:

    Time(){}
    Time(int h,int m,int s)

    {
        hour=h;
        minute=m;
        second=s;
    }
    void display()
    {
        cout<<"HOURS="<<hour<<" MINUTES="<<minute<<" SECONDS="<<second<<endl;
    }
    Time operator-(Time t2)
    {
        int value1=(hour*3600)+(minute*60)+second;
        int value2=(t2.hour*3600)+(t2.minute*60)+t2.second;
        int sum=abs(value1-value2);
       //cout<<"\n \n Difference of Times is\n:"<<sum;
        Time sumtime;
        sumtime.hour=sum/3600;
        int r1=sum%3600;
        sumtime.minute=r1/60;

        sumtime.second=r1%60;
        return sumtime;
    }

};
int main()
{
    Time t1(5,5,0),t2(1,4,60);
    t1.display();
    t2.display();

    Time timeSum;
    timeSum=t1-t2;
    timeSum.display();
    return 0;
}

