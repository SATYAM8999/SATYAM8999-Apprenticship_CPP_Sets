#include<iostream>
using namespace std;
int main()
{

    int *p;
    p=new int;

    *p=10;
    cout<<"Value of P="<<p<<endl;

    delete p;
    p=nullptr;

    cout<<"After Deleting Object="<<p<<endl;




    return 0;
}


