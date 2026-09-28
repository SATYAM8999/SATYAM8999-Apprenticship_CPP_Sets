#include<iostream>
using namespace std;
class Student
{
   public:
          int roll;
          string name;
          void getA(int x,string n)
          {
              roll=x;
              name=n;
          }
   public:

          void setA(int x,string n)
          {
              getA(x,n);
          }

          int returnRoll()
          {
              return roll;
          }
          string returnName()
          {
              return name;
          }

};
class Grade:public Student
{
private:char grade;
        void getGrade(char c)
        {
            grade=c;
        }
public:
       void setGrade(char c)
       {
           getGrade(c);
       }
       void getInformation()
        {
            int roll=returnRoll();
            string name=returnName();

            cout<<"Roll number of Student is:"<<roll<<endl;
            cout<<"Name of Student is:"<<name<<endl;
            cout<<"Grade of Student is :"<<grade<<endl;
            cout<<"\n \n";
        }

};
class Percentage:public Student
{
private:float per;
        void getPer(float p)
        {
            per=p;
        }
public:
       void setPer(float p)
       {
           getPer(p);
       }
       void getData()
        {
            int roll=returnRoll();
            string name=returnName();

            cout<<"Roll number of Student is:"<<roll<<endl;
            cout<<"Name of Student is:"<<name<<endl;
            cout<<"Percentage of Student is :"<<per<<endl;
            cout<<"\n \n";
        }

};
class Attendance:public Student
{
private:float attandance;
        void getAttendance(float a)
        {
            attandance=a;
        }
public:
       void setAttendance(float a)
       {
           getAttendance(a);
       }
       void getInfo()
        {
            int roll=returnRoll();
            string name=returnName();

            cout<<"Roll number of Student is:"<<roll<<endl;
            cout<<"Name of Student is:"<<name<<endl;
            cout<<"Attendance of Student is :"<<attandance<<endl;
            cout<<"\n \n";
        }

};
int main()
{
    Grade g1;
    g1.setA(1,"ram");
    g1.setGrade('A');
    g1.getInformation();

    Percentage p1;
    p1.setA(2,"shyam");
    p1.setPer(96.98);
    p1.getData();

    Attendance a1;
    a1.setA(3,"gita");
    a1.setAttendance(86.9);
    a1.getInfo();
    return 0;
}
