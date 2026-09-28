#include<iostream>
using namespace std;
class Test
{
public:
     int a[5];
     Test()
     {
        int x=1;
         for(int i=0;i<5;i++)
         {
             a[i]=x++;
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
class Reverse
{
public:
       Test getReverseArray(Test t)
       {
           int last_position=4;
           for(int i=0;i<5/2;i++)
           {
               int temp=t.a[i];
               t.a[i]=t.a[last_position];
               t.a[last_position]=temp;
               last_position--;
           }
           return t;
       }

};
int main()
{
    Test t;
    t.showArray();

    cout<<"After Reversing Array Element is:"<<endl;
    Reverse r1;

    Test revA=r1.getReverseArray(t);
    revA.showArray();
    return 0;
}

