#include<iostream>
#include<math.h>
using namespace std;
class Test
{
    public:int a[5];

           Test(int x[])
           {
               for(int i=0;i<5;i++)
               {
                   a[i]=x[i];
               }
           }
           void showArray()
           {
               for(int i=0;i<5;i++)
               {
                   cout<<a[i]<<" ' ";
               }
               cout<<endl;
           }
};
class DataKeeper
{
public:
    float mean,sd;
};
class Mean_SD
{
public:
       DataKeeper getMeanSD(Test t)
       {
           int sum=0;
           for(int i=0;i<5;i++)
           {
               sum=sum+t.a[i];
           }
           float mean=(float)sum/5;

           int variance=0;
           for(int i=0;i<5;i++)
           {
               variance=variance+pow((t.a[i]-mean),2);
           }
            variance=(float)(variance/5);
            float sd=sqrt(variance);
           DataKeeper dk;
           dk.mean=mean;
           dk.sd=sd;
           return dk;

       }

};
int main()
{
    int ar[5]={1,2,3,4,5};

    Test t1(ar);
    t1.showArray();


    Mean_SD msd;
    //msd.getMeanSD(t1);


    DataKeeper d=msd.getMeanSD(t1);

    cout<<"Mean="<<d.mean<<endl;
    cout<<"Standard Deviation="<<d.sd<<endl;

    return 0;
}
