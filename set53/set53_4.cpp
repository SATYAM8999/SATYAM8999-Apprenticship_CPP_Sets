#include<iostream>
using namespace std;
class Big
{
    public:
        int a=20,b=10;
         virtual void operationonTwoNos()
         {
             int big=(a>b)?a:b;
             cout<<"The Biggest number is :"<<big<<endl;
         }
};
class GCD:public Big
{
public:
        int x=20,y=10;
        void operationonTwoNos()
        {
            int rem=x%y;
            while(rem!=0)
            {
                x=y;
                y=rem;
                rem=x%y;
            }
            cout<<"GCD of Two number is:"<<y<<endl;
        }

};
int main()
{
    Big b,*ptr;
    ptr=&b;
    ptr->operationonTwoNos();

    GCD d1;
    ptr=&d1;
    ptr->operationonTwoNos();

    return 0;
}

