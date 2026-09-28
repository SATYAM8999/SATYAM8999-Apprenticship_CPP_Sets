#include<iostream>
using namespace std;
class Prime
{
    public:
           int num;
            bool flag=true;
            bool isPrime()
           {

               for(int i=2;i<num/2;i++)
               {
                   if(num%i==0)
                   {
                       flag=false;
                    break;
                   }

               }
               return flag;
           }

};
int main()
{

    Prime p1;
    p1.num=22;
    bool res=p1.isPrime();
    if(res==true)
        cout<<p1.num<<" is Prime:"<<endl;
    else
        cout<<p1.num<<" is Not Prime"<<endl;

    return 0;
}
