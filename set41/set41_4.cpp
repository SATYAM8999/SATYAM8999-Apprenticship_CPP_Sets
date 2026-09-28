#include<iostream>
using namespace std;
int main()
{
    int n=8;
    int a[n];
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

    int fa=n/2;
    int sa=n-fa;
    int first[fa],second[sa];
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(i<fa)
          first[i]=a[i];
        else
        {
            second[p++]=a[i];
        }
    }
    cout<<"first Array is:";
    for(int i=0;i<fa;i++)
    {
         cout<<first[i]<<endl;
    }
    cout<<"Second Array is:";
    for(int i=0;i<sa;i++)
    {
         cout<<second[i]<<endl;
    }

    for(int i=0;i<fa-1;i++)
    {
        for(int j=i+1;j<fa;j++)
        {
            if(first[i]>first[j])
            {
               int temp=first[i];
               first[i]=first[j];
               first[j]=temp;

            }
        }
    }
    cout<<"After Sorting in Ascending order first Array is:";
    for(int i=0;i<fa;i++)
    {
         cout<<first[i]<<endl;
    }

      for(int i=0;i<sa-1;i++)
    {
        for(int j=i+1;j<sa;j++)
        {
            if(second[i]<second[j])
            {
               int temp=second[i];
               second[i]=second[j];
               second[j]=temp;

            }
        }
    }
    cout<<"After Sorting in Descending order first Array is:";
    for(int i=0;i<sa;i++)
    {
         cout<<second[i]<<endl;
    }




  return 0;
}


