#include<iostream>
#include<math.h>
using namespace std;



class Mean_SD
{
  public:
    float getMean(int x[])
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+x[i];
        }
        float mean=sum/5;
        return mean;
    }

    float getSD(float mean,int x[])
    {
        float variance=0;
        for(int i=0;i<5;i++)
        {
            variance=variance+pow((x[i]-mean),2);

        }
        variance=sqrt(variance/5);
        return variance;


    }




};
int main()
{
    int a[]={1,2,3,4,5,6,7,8};

    Mean_SD msd;
    float mean=msd.getMean(a);
    cout<<"Mean="<<mean<<endl;

    float sd=msd.getSD(mean,a);
    cout<<"Standard deviation="<<sd<<endl;
    return 0;







}
