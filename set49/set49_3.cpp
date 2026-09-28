#include<iostream>
#include<math.h>
using namespace std;
class Two;
class Three;
class One
{

     int a[3];
 public:
     One(int x[])
     {

         for(int i=0;i<3;i++)
         {
             a[i]=x[i];
         }
     }
     void showArrayA()
     {
         for(int i=0;i<3;i++)
         {
             cout<<a[i]<<" ' ";
         }
         cout<<endl;
     }
     friend void getMargSort(One,Two,Three);
};
class Two
{

     int b[4];
 public:
     Two(int x[])
     {

         for(int i=0;i<4;i++)
         {
             b[i]=x[i];
         }
     }
     void showArrayB()
     {
         for(int i=0;i<4;i++)
         {
             cout<<b[i]<<" ' ";
         }
         cout<<endl;
     }
      friend void getMargSort(One,Two,Three);
};
class Three
{

     int c[5];
 public:
     Three(int x[])
     {

         for(int i=0;i<5;i++)
         {
             c[i]=x[i];
         }
     }
     void showArrayC()
     {
         for(int i=0;i<5;i++)
         {
             cout<<c[i]<<" ' ";
         }
         cout<<endl;
     }
      friend void getMargSort(One,Two,Three);
};
void getMargSort(One on,Two tw,Three th)
{
    int mrg[12],pos=0;

    for(int i=0;i<3;i++)
    {
        mrg[pos++]=on.a[i];
    }
     for(int i=0;i<4;i++)
    {
        mrg[pos++]=tw.b[i];
    }
    for(int i=0;i<5;i++)
    {
        mrg[pos++]=th.c[i];
    }
    for(int i=0;i<12;i++)
    {
       cout<<mrg[i]<<" , ";
    }
    for(int i=0;i<11;i++)
    {
       for(int j=i+1;j<12;j++)
       {
           if(mrg[i]>mrg[j])
           {
               int temp=mrg[i];
               mrg[i]=mrg[j];
               mrg[j]=temp;
           }
       }
    }
    cout<<"\n \n After Sorting Merge Array IS:"<<endl;
    for(int i=0;i<12;i++)
    {
       cout<<mrg[i]<<" , ";
    }
}

int main()
{
    int w1[3]={1,2,3};
    One on(w1);
    cout<<"First Array is:"<<endl;
    on.showArrayA();

    cout<<"Second Array is:"<<endl;
    int w2[4]={6,7,8,12};
    Two tw(w2);
    tw.showArrayB();

    cout<<"Third Array is:"<<endl;
    int w3[5]={11,7,44,31,40};
    Three th(w3);
    th.showArrayC();

    cout<<"Merge Array is:"<<endl;

    getMargSort(on,tw,th);

    return 0;

}

