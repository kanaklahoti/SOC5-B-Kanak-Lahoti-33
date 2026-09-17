#include<iostream>
using namespace std;
class Student
{
 public:
 string name;
 int roll_no;
 float marks;

void accept()
{
 cout<<"Enter Name:";
 cin.ignore();
 getline(cin,name);
 cout<<"Enter Roll No.:";
 cin>>roll_no;
 cout<<"Enter Marks:";
 cin>>marks;
}

void calculateResult()
{
 if(marks>=40)
 {
  cout<<"Result is pass";
 }
 else
 {
  cout<<"Result is fail";
 }
}

void display()
{
 cout<<"---Result Declaration---";
 cout<<"The name is:"<<name;
 cout<<"The roll-no is:"<<roll_no;
 cout<<"The marks are:"<<marks;
 calculateResult();
}
};

int main()
{
 Student s;
 s.accept();
 s.display();
 return 0;
}
