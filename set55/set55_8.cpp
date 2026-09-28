#include<iostream>
#include<math.h>
using namespace std;
template<class T>

class Points
{
public:
        T x1,y1,x2,y2;

        void getData()
        {
            cout<<"Enter the value of x1,y1  for First point"<<endl;
            cin>>x1>>y1;

            cout<<"Enter the value of x2,y2  for second point point"<<endl;
            cin>>x2>>y2;
        }
        T getDistance()
        {
            T value=pow(x1-x2,2)+pow(y1-y2,2);
            T distance=sqrt(value);
            return distance;
        }
};
int main()
{

    Points<int> p1;
    p1.getData();
    cout<<"Distance Between Two Point for integer value :"<<p1.getDistance()<<endl;

    Points<float> p2;
    p2.getData();
    cout<<"Distance Between Two Point for integer value :"<<p2.getDistance()<<endl;
    return 0;

}
