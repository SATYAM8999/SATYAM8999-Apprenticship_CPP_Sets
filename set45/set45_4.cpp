#include<iostream>
using namespace std;
class Test
{
  public:
      int x,y;
      void getData();
      int getGCD();


};
void Test::getData()
{
    cout<<"Enter the two number for finding the greatest common divisor:";
    cin>>x>>y;


}
int Test::getGCD()
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

int main()
{
    Test t;
    t.getData();

    int gcd=t.getGCD();
    cout<<"Greatest Common Divisor is:"<<gcd<<endl;
    return 0;
}

