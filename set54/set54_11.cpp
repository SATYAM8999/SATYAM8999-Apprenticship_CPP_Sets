#include<iostream>
using namespace std;
template<class T>getMax(T a,T b)
{
    T big=(a>b)?a:b;
    return big;
}
int main()
{
    cout<<"Biggest of Two Integer number is:"<<getMax(10,20)<<endl;
    cout<<"Biggest of Two Float number is:"<<getMax(10.54,2.87)<<endl;
    cout<<"Biggest of Two Character is:"<<getMax('a','x')<<endl;
    return 0;

}
