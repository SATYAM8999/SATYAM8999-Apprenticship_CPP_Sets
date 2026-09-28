#include<iostream>
#include<math.h>
using namespace std;
template<class T,int size>
void getMeanAndSD(T (&a) [size])
{
    T sum=0,variance=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    T mean=sum/size;
    cout<<"Mean is :"<<mean<<endl;
    for(int i=0;i<size;i++)
    {
        variance=variance+pow(a[i]-mean,2);
    }
    T SD=sqrt(variance/size);
    cout<<"Standard Deviation is :"<<SD<<endl;

}
int main()
{
    int x[5]={1,2,3,4,5};
    float y[5]={1.0,2.0,3.0,4.0,5.0};
    getMeanAndSD(x);
    getMeanAndSD(y);
    return 0;

}
