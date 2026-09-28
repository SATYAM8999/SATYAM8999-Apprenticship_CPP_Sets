#include<iostream>
#include<math.h>
using namespace std;
class Two;
class Three;
class One
{

     int a[5];
 public:
     One(int x[])
     {

         for(int i=0;i<5;i++)
         {
             a[i]=x[i];
         }
     }
     void showArrayA()
     {
         for(int i=0;i<5;i++)
         {
             cout<<a[i]<<" ' ";
         }
         cout<<endl;
     }
     friend void getCommonElements(One,Two,Three);
};
class Two
{

     int b[5];
 public:
     Two(int x[])
     {

         for(int i=0;i<5;i++)
         {
             b[i]=x[i];
         }
     }
     void showArrayB()
     {
         for(int i=0;i<5;i++)
         {
             cout<<b[i]<<" ' ";
         }
         cout<<endl;
     }
      friend void getCommonElements(One,Two,Three);
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
      friend void getCommonElements(One,Two,Three);
};
void getCommonElements(One on,Two tw,Three th)
{
    for(int i=0;i<5;i++)
    {
        int n1=on.a[i];
        for(int j=0;j<5;j++)
        {
            int n2=tw.b[j];
            for(int k=0;k<5;k++)
            {
                int n3=th.c[k];
                if(n1==n2 && n2==n3)
                {
                    cout<<n2<<" , ";
                }
            }
        }
    }
}

int main()
{
    int w1[5]={1,2,3,4,8};
    One on(w1);
    cout<<"First Array is:"<<endl;
    on.showArrayA();

    cout<<"Second Array is:"<<endl;
    int w2[5]={6,7,4,8,2};
    Two tw(w2);
    tw.showArrayB();

    cout<<"Third Array is:"<<endl;
    int w3[5]={11,7,4,2,8};
    Three th(w3);
    th.showArrayC();


   cout<<"\n \nCommon Elements in Arrays:"<<endl;
   getCommonElements(on,tw,th);

    return 0;

}
