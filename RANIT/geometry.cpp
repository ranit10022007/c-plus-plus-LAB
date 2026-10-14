#include <iostream>
#include <cmath>
using namespace std;
float AREA(float r) 
{
    return 3.1415926535f * r * r; 
}
float AREA(float l, float b) {
    return l * b;
}
float AREA(float a, float b, float c) {
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        return -1.0f; 
    }
    float s = (a + b + c) / 2.0f;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    float r, l, b, side1, side2, side3;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << AREA(r) << "\n\n";
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << AREA(l, b) << "\n\n";
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    float triangleArea = AREA(side1, side2, side3);
    if (triangleArea == -1.0f) 
	{
        cout << "Error: The given sides do not form a valid triangle." << endl;
    } 
	else 
	{
        cout << "Area of triangle (Heron's Formula) = " << triangleArea << endl;
    }
    return 0;
}

