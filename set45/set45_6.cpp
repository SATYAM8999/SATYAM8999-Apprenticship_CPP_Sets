#include<iostream>
using namespace std;
class Test
{
public:
       int x,y;
       void getData(int x,int y)
       {
           this->x=x;
           this->y=y;
       }
       void display()
       {
           cout<<"Value of X="<<x<<endl;
           cout<<"Value of y="<<y;
       }
};
int main()
{
    Test t;
    t.getData(10,20);
    t.display();
    return 0;
}
