#include<iostream>
using namespace std;
int main()
{
    int milimeter;
    cout<<"enter the input in Milimeter";
    cin>>milimeter;

    int meter=milimeter/1000;
    int r1=milimeter%1000;
    int feet=r1/300;
    int r2=r1%300;
    int inches=r2/25;
    int r3=r2%25;
    int centemeter=r3/10;
    int mili=r3%10;
    cout<<"meters="<<meter<<endl;
    cout<<"Feets="<<feet<<endl;
    cout<<"inches="<<inches<<endl;
    cout<<"centemeters="<<centemeter<<endl;
    cout<<"milimeter="<<mili<<endl;
    return 0;


}
