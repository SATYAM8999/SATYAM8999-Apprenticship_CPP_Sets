#include<iostream>
using namespace std;
class Test
{

   public:
       int a[5];

       Test(int x[])
       {
           for(int i=0;i<5;i++)
              a[i]=x[i];
       }
       void showData()
       {
           for(int i=0;i<5;i++)
           {
               cout<<a[i]<<" ' ";
           }
           cout<<endl;
       }
       float getAverage(int x[])
       {
           int sum=0;
           for(int i=0;i<5;i++)
           {
               sum=sum+a[i];

           }
           float avg=(float)sum/5;
           return avg;

       }
};
int main()
{
    int ar[5]={1,2,3,4,5};
    Test t(ar);
    t.showData();

    float avg=t.getAverage(ar);
    cout<<"average="<<avg<<endl;

}
