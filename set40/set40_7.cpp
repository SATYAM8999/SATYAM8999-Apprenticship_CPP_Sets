#include<iostream>
using namespace std;
int main()
{

    int a=15;

    cout<<"Postincrement";

    cout<<"value of A="<<a<<endl;

    int x=a++;

    cout<<"value of X="<<x<<endl;
    cout<<"value of A="<<a<<endl;

    cout<<"-----------------------"<<"\n";
    cout<<"Preincrement";
    cout<<"value of A="<<a<<endl;
    int p=++a;

    cout<<"-----------------------"<<"\n";

    cout<<"value of P="<<p<<endl;
    cout<<"value of A="<<a<<endl;


    cout<<"Post drecrement"<<endl;

    cout<<"value of A="<<a<<endl;

    int v=a--;

    cout<<"value of V="<<v<<endl;
    cout<<"value of A="<<a<<endl;

    cout<<"-----------------------"<<"\n";

    cout<<"Predrecrement"<<endl;
    cout<<"value of A="<<a<<endl;
    int s=--a;

    cout<<"-----------------------"<<"\n";

    cout<<"value of s="<<s<<endl;
    cout<<"value of A="<<a<<endl;

    return 0;
}

