//A copy constructor is a member function which initializes an object using another object of the same class. 
//example

#include "iostream"
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
};
