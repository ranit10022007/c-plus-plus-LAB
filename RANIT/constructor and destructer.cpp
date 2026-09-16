#include <iostream>
using namespace std;
class Shape 
{
float radius, length, width;
public:
    Shape(float r, float l, float w) 
	{
        radius = r;
        length = l;
        width = w;
        cout << "Constructor called\n";
    }
    void circlePerimeter() 
	{
        cout << "Perimeter of Circle = " << 2 * 3.14 * radius << endl;
    }
    void rectanglePerimeter() {
        cout << "Perimeter of Rectangle = "
             << 2 * (length + width) << endl;
    }
    ~Shape() 
	{
        cout << "Destructor called\n";
    }
};

int main() 
{
    float r, l, w;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter length and width: ";
    cin >> l >> w;
    Shape s(r, l, w);
    s.circlePerimeter();
    s.rectanglePerimeter();
    return 0;
}
