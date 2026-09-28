#include<iostream>
using namespace std;
template<class T>
class Numbers
{
    private:T n1,n2;
    public:
           void getData()
           {
               cout<<"Enter two numbrs :"<<endl;
               cin>>n1>>n2;


           }
           T getSum()
           {
               T sum=n1+n2;
               return sum;
           }
};
int main()
{
    Numbers<int> iob;
    Numbers<float> fob;

    iob.getData();
    cout<<"Addition of two integer numbers:"<<iob.getSum()<<endl;

    fob.getData();
    cout<<"addition of two Float Numbers:"<<fob.getSum()<<endl;
    return 0;
}
