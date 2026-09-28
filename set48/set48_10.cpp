#include<iostream>
#include<math.h>

using namespace std;

class DataKeeper
{
public:
       float mean,sd;
};
class Two;
class Three;
class Four;
class Five;
class One
{

private:
        int a;
public:
        void getdata(int x)
        {
            a=x;
        }

       friend DataKeeper getMeanSD(One,Two,Three,Four,Five);
};
class Two
{
        int b;
    public:
        void getdata(int x)
        {
            b=x;
        }

        friend DataKeeper getMeanSD(One,Two,Three,Four,Five);

};
class Three
{
        int c;
    public:
        void getdata(int x)
        {
            c=x;
        }

        friend DataKeeper getMeanSD(One,Two,Three,Four,Five);

};
class Four
{
        int d;
    public:
        void getdata(int x)
        {
            d=x;
        }

        friend DataKeeper getMeanSD(One,Two,Three,Four,Five);

};
class Five
{
        int e;
    public:
        void getdata(int x)
        {
            e=x;
        }

        friend DataKeeper getMeanSD(One,Two,Three,Four,Five);

};
DataKeeper getMeanSD(One o,Two th,Three t,Four f,Five fi)
{

    int a[5]={o.a,th.b,t.c,f.d,fi.e};

    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    float mean=(float)sum/5;

    int variance=0;
    for(int i=0;i<5;i++)
    {
        variance=variance+pow(a[i]-mean,2);

    }
    float sd=(float)sqrt(variance/5);

    DataKeeper dk;
    dk.mean=mean;
    dk.sd=sd;
    return dk;

}
int main()
{
    One o1;
    o1.getdata(1);
    Two t;
    t.getdata(2);
    Three th;
    th.getdata(3);
    Four f;
    f.getdata(4);
    Five f1;
    f1.getdata(5);

    DataKeeper d=getMeanSD(o1,t,th,f,f1);
    cout<<"Mean="<<d.mean<<endl;
    cout<<"SD="<<d.sd<<endl;
 return 0;

}
