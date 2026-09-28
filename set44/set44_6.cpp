#include<iostream>
using namespace std;

class Point
 {
public:
    int x1,y1;

    void getData()
    {
        cin >> x1 >> y1;
    }

    void display()
    {
        cout<< x1 << "," << y1<< endl;
    }
};

class CheckPoints
{
public:
    void checkPoints1(Point p[])
    {
        bool flag = true;
        for (int i = 0; i < 5; i++)
        {
            if (p[0].y1 != p[i].y1)
             {
                flag = false;
                break;
             }
        }
        if (flag)
            cout << "Points are Parallel to x Axis" << endl;
        else
            cout << "Points are not Parallel to x Axis" << endl;
    }
};

int main()
{
    Point p1[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter point " << i + 1;
        p1[i].getData();
    }

    cout << "\nEntered Points:\n";
    for (int i = 0; i < 5; i++)
    {
        p1[i].display();
    }

    CheckPoints ch;
    ch.checkPoints1(p1);

    return 0;
}
