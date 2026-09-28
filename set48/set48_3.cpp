#include<iostream>
#include<math.h>
using namespace std;
class Test
{


   public:int a[5];
          Test()
          {
              cout<<"Enter the value of Array:"<<endl;
              for(int i=0;i<5;i++)
              {
                 cin>>a[i];
              }
          }
          void displayArray()
          {
              for(int i=0;i<5;i++)
              {
                  cout<<a[i]<<" , ";
              }
          }
          void getMeanSD();
          void findBigSmall();
          void getReverse();

};
void Test::getMeanSD()
{
   int sum=0;
   for(int i=0;i<5;i++)
   {
       sum=sum+a[i];

   }
   float mean=(float)sum/5;
   cout<<"\nMean:"<<mean<<endl;

   float variance=0;
   for(int i=0;i<5;i++)
   {
       variance=variance+pow((a[i]-mean),2);

   }
   variance=variance/5;
   float sd=sqrt(variance);
   cout<<"Standard Deviation is:"<<sd<<endl;

}
void Test::findBigSmall()
{
    int big=a[0],small=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>big)
            big=a[i];
        if(a[i]<small)
            small=a[i];
    }
    cout<<"Big Element is:"<<big<<endl;
    cout<<"Small Element is:"<<small<<endl;
}
void Test::getReverse()
{
    int last_position=4;
    for(int i=0;i<5/2;i++)
    {
        int temp=a[i];
        a[i]=a[last_position];
        a[last_position]=temp;

    last_position--;
    }

    cout<<"After Reversing Array Element are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" , ";
    }
    cout<<endl;
}
int main()
{
    Test t;
    t.displayArray();
    t.getMeanSD();
    t.findBigSmall();
    t.getReverse();
    return 0;
}
