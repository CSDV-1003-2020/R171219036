//A copy constructor is a member function which initializes an object using another object of the same class. 
//example

#include <iostream>
using namespace std;

class point
{
private:
  double x, y;

public:
  // Non-default Constructor & default Constructor
  point (double px, double py) 
  {
    x = px, y = py;
  }
  void getpoint(double x)
  {
return x;
  }
  void getpoint(double y)
  {
return y;
  }
void setpoint(double x)
{
cout<<"set the value of x"<<x;;
}
void setpoint(double y)
{
cout<<"set the value of y"<<y;
};

int main(void) 
{
  // Define an array of size 10 & of type point
  // This line will cause error


  point a[10];

  // Remove above line and program will compile without error
  point b = point(5, 6);
}
