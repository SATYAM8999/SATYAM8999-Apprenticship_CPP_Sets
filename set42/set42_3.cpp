#include<iostream>
using namespace std;
class Reverse
{
    public:
            int num;


            int getReverse()
            {
                int rev=0;
                while(num>0)
                {
                    int rem=num%10;
                    rev=rev*10+rem;
                    num=num/10;
                }
                return rev;

            }

};



int main()
{
    Reverse r1;
    r1.num=6745;
    cout<<"Reverse Number="<<r1.getReverse();
    return 0;

}
