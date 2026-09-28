#include<iostream>
#include<math.h>
using namespace std;


class Mean_SD
{
  public:
      float mean;
       float sd;
      int a,b,c,d,e;


      void getData(int x,int y)
      {
          a=x;
          b=y;


      }
      float getMean()
      {
           mean=(float)(a+b+c+d+e)/5;
          return mean;
      }
    float getSD(float mean)
      {
         int arr[]={a,b,c,d,e};
          for(int i=0;i<5;i++)
          {
                sd=pow((arr[i]-mean),2);


          }
          sd=sqrt(sd/5);
           return sd;

      }


};
int main()
{

    Mean_SD msd;
    msd.a=1;
    msd.b=2;
    msd.c=3;
    msd.getData(4,5);
    float mean1=msd.getMean();
    cout<<mean1;
    cout<<"Standard deviation="<<msd.getSD(mean1);
    return 0;
}



