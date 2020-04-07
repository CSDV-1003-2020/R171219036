// Parameterized Constructors
// It is possible to pass arguments to constructors
// To create a parameterized constructor, simply add parameters to it the way you would to any other function

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
