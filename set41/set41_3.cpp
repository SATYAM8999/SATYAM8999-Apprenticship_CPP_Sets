#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[n+1];
    cout<<"Enter the array Element";
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }
    cout<<"array Element are:";
    for(int i=0;i<n;i++)
    {
         cout<<a[i]<<endl;
    }
    int element,pos;
    cout<<"Enter the Number that to be insert and also insert position";

    cin>>element>>pos;

    pos=pos-1;

    for(int i=n;i>0;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=element;
     cout<<" After Inserting array Element are:";
    for(int i=0;i<n+1;i++)
    {
         cout<<a[i]<<endl;
    }





  return 0;
}

