#include<iostream>
using namespace std;
template<class T,int size>
T getBig(T(&a)[size])
{
    T big=a[0];
    for(int i=1;i<size;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    return big;
}
int main()
{
    int x[5]={43,45,3,76,9};
    float y[6]={6.3,61.54,9.65,66.34,8.6,10.2};

    cout<<"Biggest of Element in Integer array :"<<getBig(x)<<endl;
    cout<<"Biggest of element in Float Array :"<<getBig(y);
    return 0;
}
