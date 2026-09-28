#include<iostream>
#include<math.h>
using namespace std;
class Mean_SD
{
public:
    void findRangeElement(int x[]);
};
void Mean_SD::findRangeElement(int x[])
{
    int sum=0;

    for(int i=0;i<5;i++)
    {
        sum=sum+x[i];

    }
    float mean=(float)sum/5;

    float variance=0;
    for(int i=0;i<5;i++)
    {
        variance=variance+pow((x[i]-mean),2);

    }
    float sd=sqrt(variance/5);


    cout<<"Mean="<<mean<<endl;
    cout<<"Standard Deviation="<<sd<<endl;

    float range1=mean-sd;
    float range2=mean+sd;


    cout<<"range 1="<<range1<<endl;
    cout<<"range2="<<range2;
}

int main()
{

    int a[]={1,2,3,4,5};
    Mean_SD msd;
    msd.findRangeElement(a);
    return 0;

}
