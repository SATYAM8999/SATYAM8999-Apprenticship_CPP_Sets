#include<iostream>
using namespace std;
class  Number
{
    public:int a;

    void getData(int x)
    {
        a=x;

    }
   void doReverse( Number x[])
    {
        int last_pos=4;
        for(int i=0;i<5/2;i++)
        {
            int temp=x[i].a;
            x[i].a=x[last_pos].a;
            x[last_pos].a=temp;

           last_pos--;
        }

    }
};
int main()
{
   Number n[5];
   int x=10;
   for(int i=0;i<5;i++)
   {
       n[i].getData(x);
       x=x+10;

   }
   cout<<"Before reversing Array is:"<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<n[i].a<<" , ";

   }
   n[0].doReverse(n);
   cout<<"\n After reversing Array is:"<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<n[i].a<<" , ";

   }



    return 0;

}

