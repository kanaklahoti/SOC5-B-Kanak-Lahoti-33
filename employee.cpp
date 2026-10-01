#include<iostream>
using namespace std;
class Employee
{
 public:
 string name;
 int id;
 int salary;
 int bonus;
 int total;
 Employee()
 {
  name="unknown";
  id=0;
  salary=0;
  bonus=0;
 total=0;
 }
 Employee(string n, int i, int s, int b, int t)
 {
 name="n";
 id=i;
 salary=s;
 bonus=b;
 total=t;
 }

void calculateSalary()
{
 total=salary+bonus; 
}

 void display()
{
 cout<<"The name of employee is:"<<name<<endl;
 cout<<"The employee id is:"<<id<<endl;
 cout<<"The salary is:"<<salary<<endl;
 cout<<"The bonus is:"<<bonus<<endl;
 cout<<"The total salary is:"<<total<<endl;
 
 calculateSalary();
}
};

int main()
{
 Employee e;
 e.display();
 Employee e1("unknown", 15, 32000, 7890, 39890);
 return 0;
}
