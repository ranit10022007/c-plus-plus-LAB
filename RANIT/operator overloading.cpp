#include <iostream>
class Complex 
{
private:
    double real;
    double imag;
public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }
    Complex operator--() {
        --real;
        --imag;
        return *this;
    }
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }
    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};
int main() {
    Complex c1(4.5, 3.0);
    Complex c2(1.5, 2.0);
    Complex c3;
    std::cout << "--- Initial Complex Numbers ---" << std::endl;
    std::cout << "c1 = "; c1.display();
    std::cout << "c2 = "; c2.display();
    c3 = c1 + c2;
    std::cout << "\n--- Binary Addition (c3 = c1 + c2) ---" << std::endl;
    std::cout << "c3 = "; c3.display();
    c3 = c1 - c2;
    std::cout << "\n--- Binary Subtraction (c3 = c1 - c2) ---" << std::endl;
    std::cout << "c3 = "; c3.display();
    ++c1;
    std::cout << "\n--- Unary Pre-increment (++c1) ---" << std::endl;
    std::cout << "c1 = "; c1.display();
    --c2;
    std::cout << "\n--- Unary Pre-decrement (--c2) ---" << std::endl;
    std::cout << "c2 = "; c2.display();
    return 0;
}
