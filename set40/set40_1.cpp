#include<iostream>
using namespace std;
int main()
{
    int days;
    cout<<"Enter the number of days";
    cin>>days;
    int year=days/365;
    int r1=days%365;
    int month=r1/30;
    int r2=r1%30;
    int week=r2/7;
    int day=r2%7;
    cout<<"years="<<year<<"\n";
    cout<<"months="<<month<<endl;
    cout<<"Week="<<week<<endl;
    cout<<"days="<<day<<endl;

    return 0;
}
