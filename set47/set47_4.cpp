#include<iostream>
using namespace std;
class Test
{
public:
     int a[5];
     Test(int x[])
     {

         for(int i=0;i<5;i++)
         {
             a[i]=x[i];
         }
     }
     void showArray()
     {
         for(int i=0;i<5;i++)
         {
             cout<<a[i]<<" ' ";
         }
         cout<<endl;
     }
};

class BigSmall
{
public:
      Test getSwappedbigSmall(Test t)
      {
          int big=t.a[0],small=t.a[0],bp=0,sp=0;
          for(int i=1;i<5;i++)
          {
              if(t.a[i]>big)
              {
                   big=t.a[i];
                   bp=i;
              }

            if(t.a[i]<small)
            {
                small=t.a[i];
                sp=i;
            }

          }
          for(int i=0;i<5;i++)
          {
              int temp=t.a[bp];
              t.a[bp]=t.a[sp];
              t.a[sp]=temp;
          }

         return t;
      }
};

int main()
{
    int ar[5]={-1,100,430,60,9};
    Test t(ar);
    cout<<"Original array is:"<<endl;
    t.showArray();

   BigSmall g;
   cout<<"After swapped array element is:"<<endl;
   Test t1=g.getSwappedbigSmall(t);
   t1.showArray();


    return 0;
}


