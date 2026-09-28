#include<iostream>
using namespace std;
int main()
{

    int a=6;

    a&=6;
    cout<<"value of A="<<a<<endl;
    a|=3;
    cout<<"value of A="<<a<<endl;
    a^=4;
    cout<<"value of A="<<a<<endl;
    a<<=1;
    cout<<"value of A="<<a<<endl;
    a>>=1;
    cout<<"value of A="<<a<<endl;

    return 0;
}
