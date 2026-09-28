#include<iostream>
using namespace std;
class Number
{
public: int a[6];
        void getData()
        {
            cout<<"Enter the array element:";
            for(int i=0;i<6;i++)
            {
                cin>>a[i];
            }
        }

        void getPositiveNegativeZeroCount()
        {
            int p=0,n=0,z=0;
            for(int i=0;i<6;i++)
            {
                if(a[i]>0)
                    p++;
                if(a[i]<0)
                    n++;
                if(a[i]==0)
                    z++;
            }
            cout<<"Positive count="<<p<<endl;
            cout<<"negative count="<<n<<endl;
            cout<<"zero count="<<z<<endl;
        }


};

int main()
{
    Number n1;
    n1.getData();
    n1.getPositiveNegativeZeroCount();
    return 0;
}
