#include<iostream>
using namespace std;
class Test
{

   public:
       int a[5];

       Test(int x[])
       {
           for(int i=0;i<5;i++)
              a[i]=x[i];
       }
       void showData()
       {
           for(int i=0;i<5;i++)
           {
               cout<<a[i]<<" ' ";
           }
           cout<<endl;
       }

};
class Sorter
{
public:
      Test sortInAscending(Test t)
      {
          for(int i=0;i<4;i++)
          {
              for(int j=i+1;j<5;j++)
              {
                  if(t.a[i]>t.a[j])
                  {
                      int temp=t.a[i];
                      t.a[i]=t.a[j];
                      t.a[j]=temp;

                  }
              }
          }
          return t;
      }
};
int main()
{
    int ar[5]={100,29,3,14,12};
    Test t(ar);
    t.showData();

    cout<<"After sorting array Element:"<<endl;
    Sorter s;

    Test tsort=s.sortInAscending(t);
    tsort.showData();
    return 0;



}

