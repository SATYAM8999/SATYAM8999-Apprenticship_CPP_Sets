#include<iostream>
using namespace std;
template<class T,int size>

T  getMiddleElement(T(&a) [size])
{
    T middle_Element=0;
    for(int i=0;i<size;i++)
    {
        middle_Element=a[size/2];
    }
    return middle_Element;


}
int main()
{
    int x[5]={43,45,3,76,9};
    float y[6]={6.3,61.54,9.65,66.34,8.6,10.2};


    cout<<"Middle Element in Integer array is: "<<getMiddleElement(x)<<endl;
    cout<<"Middle Element in Float array is: "<<getMiddleElement(y)<<endl;
    return 0;
}
