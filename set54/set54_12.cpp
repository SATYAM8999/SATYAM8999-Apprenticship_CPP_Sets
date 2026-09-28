#include<iostream>
using namespace std;
template<class T> getAverage(T a,T b,T c)
{
    T avg=(a+b+c)/3;
    return avg;
}
int main()
{
    cout<<"Average of Three integer number is:"<<getAverage(10,20,30)<<endl;
    cout<<"Average of Three integer number is:"<<getAverage(10.0,2.01,10.33)<<endl;
    cout<<"Average of Three integer number is:"<<getAverage(299.4,21.1232,98.765)<<endl;

}
