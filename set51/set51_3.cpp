#include<iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    float per;
public:

      Student(int roll,string name,float per)
      {
          this->roll=roll;
          this->name=name;
          this->per=per;
      }
      void display()
      {
          cout<<"\nRoll No="<<roll;
          cout<<"\nName="<<name;
          cout<<"\nPercentage="<<per;
      }
      void* operator new(size_t size)
      {
          cout<<"Size of the Object in Byte:"<<size<<endl;
          void *p=malloc(size);
          return p;
      }


};
int main()
{
    Student s1(11,"ram",98.77);
    Student *p=new Student(12,"shyam",96.99);

    p->display();
    return 0;
}
