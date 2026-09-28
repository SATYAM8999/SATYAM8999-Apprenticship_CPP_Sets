#include<iostream>
using namespace std;
class ReverseArray
{
public:
           void reverse()
           {
               int x[6]={1,2,3,4,5,6};
               cout<<"\nBefore reversing array Element:"<<endl;
               for(int i=0;i<6;i++)
               {
                   cout<<x[i]<<" , ";
               }
               int last_pos=5;
               for(int i=0;i<6/2;i++)
               {
                   int temp=x[i];
                   x[i]=x[last_pos];
                   x[last_pos]=temp;
                   last_pos--;
               }
               cout<<"\nAfter reversing array Element:"<<endl;
               for(int i=0;i<6;i++)
               {
                   cout<<x[i]<<" , ";
               }
           };

};
class ReverseArrayElements:public ReverseArray
{
public:
         void reverse()
         {
             int x[6]={123,456,762,43,476,98};
             cout<<"\n\nBefore reversing array Element:"<<endl;
               for(int i=0;i<6;i++)
               {
                   cout<<x[i]<<" , ";
               }

             for(int i=0;i<6;i++)
             {
                 int num=x[i];
                 int rev=0;
                 while(num>0)
                 {
                     int rem=num%10;
                     rev=rev*10+rem;
                     num=num/10;

                 }
                 x[i]=rev;
             }
             cout<<"\nAfter reversing Each array Elements:"<<endl;
               for(int i=0;i<6;i++)
               {
                   cout<<x[i]<<" , ";
               }
         }

};
int main()
{
    ReverseArray ra,*Rptr;
    Rptr=&ra;
    Rptr->reverse();

    ReverseArrayElements rae,*Raeptr;

    Raeptr=&rae;
    Raeptr->reverse();
    return 0;

}
