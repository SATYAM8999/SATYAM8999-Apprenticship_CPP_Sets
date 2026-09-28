#include<iostream>
#include<string>
using namespace std;
class Student
{
    int roll;
    string name;
    float per;
public:

    Student(){}
    void getData()
    {
        cout<<"Enter the roll no name and percentage of Student\n";
        cin>>roll;
        cin>>name>>per;
    }

    void showData()
    {
        cout<<"ROLL NO:"<<roll<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"percentage:"<<per<<endl;
    }
    void operator=(Student temp)
    {
        roll=temp.roll;
        name=temp.name;
        per=temp.per;
    }

};
int main()
{
    Student s;
    s.getData();
    s.showData();
    Student new_s;
    new_s=s;
    cout<<"\n\nAfter assigning value to new object\n";
    new_s.showData();
    return 0;

}
