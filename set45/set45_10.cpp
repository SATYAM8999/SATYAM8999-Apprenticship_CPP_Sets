#include<iostream>
using namespace std;
class Test
{
public:
    static int getReverse(int num)
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

    int rev1=Test::getReverse(123);
    int rev2=Test::getReverse(4567);
    cout<<"Addition of two Reverse number="<<(rev1+rev2);
    return 0;
}
