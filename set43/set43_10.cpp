#include<iostream>
#include<math.h>

using namespace std;


class DataKeeper
{
    public:
    float mean,standard_deviation;
};
class Mean_SD
{
public:

    DataKeeper getData(int x[])
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+x[i];
        }

        float mean=(float)sum/5;
        float variance;
        for(int i=0;i<5;i++)
        {
            variance=variance+pow((x[i]-mean),2);

        }
        float sd=(variance/5);
        sd=sqrt(sd);

        DataKeeper dk;
        dk.mean=mean;
        dk.standard_deviation=sd;
        return dk;

    }

};
int main()
{
    int a[]={1,2,3,4,5};


    Mean_SD msd;
    DataKeeper d=msd.getData(a);
    cout<<"MEan="<<d.mean<<"\n"<<"Standard Deviation="<<d.standard_deviation<<endl;
    return 0;















}
