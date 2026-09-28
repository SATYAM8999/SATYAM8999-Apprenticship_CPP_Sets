#include<iostream>
using namespace std;
class  Number
{
    public:int a;

    void getData(int x)
    {
        a=x;

    }
   int getSum( Number x[])
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum=sum+x[i].a;

        }
       return sum;

    }
};
int main()
{
   Number n[5]={1,2,3,4,5};
   //int x=10;
  /* for(int i=0;i<5;i++)
   {
       n[i].getData(x);
       x=x+10;

   }
   */
   cout<<"Array is:"<<endl;
   for(int i=0;i<5;i++)
   {
       cout<<n[i].a<<" , ";

   }
   int sum=n[0].getSum(n);
   cout<<"\n sum="<<sum<<endl;

    return 0;

}
