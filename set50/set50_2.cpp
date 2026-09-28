#include<iostream>
using namespace std;
class ArrayAddition
{
    int a[6];
public:
    ArrayAddition(){}
    ArrayAddition(int x[])
    {
        for(int i=0;i<6;i++)
        {
            a[i]=x[i];
        }
    }
    void showArray()
    {
        for(int i=0;i<6;i++)
        {
            cout<<a[i]<<" , ";
        }
    }
   ArrayAddition operator+(ArrayAddition a1)
    {
        ArrayAddition add;
        for(int i=0;i<6;i++)
        {

              add.a[i]=a[i]+a1.a[i];
        }
        return add;
    }
};
int main()
{
    int w1[6]={1,2,3,4,5,6};
    int w2[6]={7,8,9,4,3,2};
    ArrayAddition a1(w1);
    ArrayAddition a2(w2);
    cout<<"First Array is:\n";
    a1.showArray();
    cout<<"\nSeocnd Array is:\n";
    a2.showArray();

    ArrayAddition sumArray;
    sumArray=a1+a2;
    cout<<"\nSum Of Array is:\n";
    sumArray.showArray();

    return 0;

}
