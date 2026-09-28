#include<iostream>
using namespace std;
int main()
{

    int a[5];

    cout<<"Enter the array Element";
    for(int i=0;i<5;i++)
    {
         cin>>a[i];
    }
    cout<<"array Element are:";
    for(int i=0;i<5;i++)
    {
         cout<<a[i]<<endl;
    }


    int last_pos=4;
    for(int i=0;i<5/2;i++)
    {
        int temp=a[i];
        a[i]=a[last_pos];
        a[last_pos]=temp;
        last_pos--;
    }
    cout<<"After reversing array Element are:";
    for(int i=0;i<5;i++)
    {
         cout<<a[i]<<endl;
    }
  return 0;
}
