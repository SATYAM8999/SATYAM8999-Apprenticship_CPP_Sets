#include<iostream>
using namespace std;
class GCD
{
public:
    int x,y;
    GCD()
    {
        x=18;
        y=6;

    }
    int getGCD()
    {
        int rem=x%y;
        while(rem!=0)
        {
            x=y;
            y=rem;
            rem=x%y;

        }
        return y;
    }
};
int main()
{
    GCD g1;
    cout<<"GCD of Number="<<g1.getGCD()<<endl;
    return 0;


}

