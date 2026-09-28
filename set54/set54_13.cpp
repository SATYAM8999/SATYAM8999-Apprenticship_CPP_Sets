#include<iostream>
using namespace std;
template<class T>swappingOfNumbers(T &x,T &y)
{
    T temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    float x,y;
    double p,q;
    cout<<"Enter the integer float and double numbers: "<<endl;
    cin>>a>>b>>x>>y>>p>>q;

    cout<<"Before swapping value of A is: "<<a<<" and b is: "<<b<<endl;
    cout<<"Before swapping value of x is: "<<x<<" and y is: "<<y<<endl;
    cout<<"Before swapping value of p is: "<<p<<" and q is: "<<q<<endl;

    swappingOfNumbers(a,b);
    swappingOfNumbers(x,y);
    swappingOfNumbers(p,q);


    cout<<"\n\nAfter swapping value of A is: "<<a<<"and b is: "<<b<<endl;
    cout<<"After swapping value of x is: "<<x<<"and y is: "<<y<<endl;
    cout<<"After swapping value of p is: "<<p<<"and q is: "<<q<<endl;
}
