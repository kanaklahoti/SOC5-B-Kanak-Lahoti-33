#include<iostream>
using namespace std;
class Rectangle
{
 private:
 float l,b;
 public:
 void accept()
 { 
  cout<<"Enter the value for l:";
  cin>>l;
  cout<<"Enter the value for b:";
  cin>>b;
 }
 float area();
 float perimeter();
 void display()
 { 
  cout<<"The area of rectangle is:"<<area();
  cout<<"The area of perimeter is:"<<perimeter();
 }
};

float Rectangle::area()
{
 return l*b;
}
float Rectangle::perimeter()
{
 return 2*(l+b);
}

int main()
{
 Rectangle r;
 r.accept();
 r.display();
 return 0;
}
