#include<iostream>
using namespace std;
class Distance
{
    int feet,inches;
public:
       Distance()
       {
           feet=0;
           inches=0;
       }
       Distance(int x,int y)
       {
           feet=x;
           inches=y;
       }
       void display()
       {
           cout<<"Feet="<<feet<<" "<<"inches="<<inches<<endl;
       }
       Distance operator()(int a,int b)
       {
           Distance d;
           d.feet=a;
           d.inches=b;
           return d;
       }



};
int main()
{
    Distance d1(10,2),d2;
    cout<<"first Distance"<<endl;
    d1.display();

    d2=d1(100,200);
    cout<<"\nSecond Distance"<<endl;
    d2.display();


    return 0;
}
