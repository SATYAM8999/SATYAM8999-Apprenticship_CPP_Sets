#include<iostream>
using namespace std;
class Test
{
     int concat[10];

public:int a[5];
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
            cout<<a[i]<<" , ";
        }

      }
      void concatArray()
      {
        for(int i=0;i<10;i++)
        {
            cout<<concat[i]<<" , ";
        }

      }
      Test operator+(Test t)
      {
         int pos=0;
          for(int i=0;i<5;i++)
          {
              t.concat[pos++]=a[i];
          }
          for(int i=0;i<5;i++)
          {
              t.concat[pos++]=t.a[i];
          }
          return t;
      }
};
int main()
{
    int w1[5]={1,2,3,4,5};
    int w2[5]={6,7,8,9,10};
    Test t1(w1);
    Test t2(w2);
    cout<<"\n First Array is :"<<endl;
    t1.showArray();
    cout<<"\n\nSecond Array is :"<<endl;
    t2.showArray();

    Test con=t1+t2;
    cout<<"\n\nConcatination Array is :"<<endl;
    con.concatArray();

    return 0;
}
