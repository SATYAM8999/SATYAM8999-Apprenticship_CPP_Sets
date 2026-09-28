#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
           int roll;
           string name;
           float percentage;
           void getData()
           {
               cin>>roll>>name>>percentage;
           }
           void showData()
           {
               cout<<roll<<" "<<name<<" "<<percentage<<endl;
           }
};
class Topper
{
public:

    Student getTopper(Student s[])
    {


        Student top=s[0];
        for(int i=1;i<5;i++)
        {
            if(s[i].percentage>top.percentage)
                top=s[i];
        }
        return top;
    }
};
int main()
{
    Student s[5];

    cout<<"Enter the Five Student Information:"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter the student roll no, name and percentage"<<i+1<<endl;
        s[i].getData();
    }
    for(int i=0;i<5;i++)
    {

        s[i].showData();
    }
    Topper t;
    Student s1=t.getTopper(s);
    cout<<"Topper is:"<<endl;
    cout<<s1.roll<<"  "<<s1.name<<"   "<<s1.percentage<<endl;
    return 0;

}
