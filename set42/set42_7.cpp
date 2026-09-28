#include<iostream>
using namespace std;

class Sorter
{


public:

     void getAscending(int x[])
     {
         for(int i=0;i<9;i++)
         {
             for(int j=i+1;j<10;j++)
             {
               if(x[i]>x[j])
               {
                int temp=x[i];
                 x[i]=x[j];
                 x[j]=temp;

               }
             }
         }
     }

     void getDescending(int x[])
     {

         for(int i=0;i<9;i++)
         {

             for(int j=i+1;j<10;j++)
             {

                 if(x[i]<x[j])
                 {
                     int temp=x[i];
                     x[i]=x[j];
                     x[j]=temp;
                 }
             }
         }
     }




};


int main()
{
    int a[]={10,200,40,6,45,345,32,3,34,3};
    cout<<"Array before Sorting is:"<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" , ";

    }

    Sorter s1;
    s1.getAscending(a);
    cout<<"After sorting in ascending"<<endl;
     for(int i=0;i<10;i++)
    {
           cout<<a[i]<<" , ";

    }
    s1.getDescending(a);
    cout<<"\n"<<"After sorting in descending"<<endl;
     for(int i=0;i<10;i++)
    {
           cout<<a[i]<<" , ";

    }


    return 0;




}
