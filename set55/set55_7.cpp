#include<iostream>
using namespace std;
template<class T>
class Numbers
{
    private:T a,b,c;

    public:
           void getData()
            {
                cout<<"Enter the Three number for finding biggest of numbers: "<<endl;
                cin>>a>>b>>c;

            }
            T getBig()
            {
                T big=(a>b && a>c)?a:(b>a && b>c)?b:c;
                return big;
            }
};
int main()
{
    Numbers<int> iob;
    Numbers<float> fob;

    iob.getData();
    cout<<"Biggest of Three integers is:"<<iob.getBig()<<endl;

    fob.getData();
    cout<<"Biggest of Three Floats is:"<<fob.getBig()<<endl;
    return 0;

}

