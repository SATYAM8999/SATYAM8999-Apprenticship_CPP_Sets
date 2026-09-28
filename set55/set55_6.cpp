#include<iostream>
using namespace std;
template<class T>
class Numbers
{
    private:T n1,n2,n3;

    public:
            void getData()
            {
                cout<<"Enter the Three number for Finding the Average: "<<endl;
                cin>>n1>>n2>>n3;

            }
            T getAverage()
            {
                T avg=(n1+n2+n3)/3;
                return avg;
            }
};
int main()
{
    Numbers<int> iob;
    Numbers<float> fob;

    iob.getData();
    cout<<"Average of Two integer number is:"<<iob.getAverage()<<endl;

    fob.getData();
    cout<<"Average of Two Float number is:"<<fob.getAverage()<<endl;

}
