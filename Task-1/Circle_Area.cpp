#include <iostream>
using namespace std;

struct Circle
{
    float radius;

    float calculateArea()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c1, c2;

    c1.radius = 5;
    c2.radius = 10;

    cout << "Area of Circle 1: " << c1.calculateArea() << endl;
    cout << "Area of Circle 2: " << c2.calculateArea() << endl;

    return 0;
}
