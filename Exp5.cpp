
/*.	Design a class 'Complex 'with data members for real and imaginary part.
Provide default and parameterized constructors.
Write a program to perform arithmetic operations of two complex numbers
using operator overloading.
i.	Addition and subtraction using friend functions
ii.	Multiplication and division using member functions*/
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex()
    {
        real =0;
        imag =0;
    }
    Complex(float r, float i)
    {
        real =r;
        imag =i;
    }
    friend Complex operator + (Complex c1, Complex c2);
    friend Complex operator - (Complex c1, Complex c2);
    Complex operator * (Complex c);
    Complex operator / (Complex c);
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
Complex operator + (Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
Complex operator - (Complex c1, Complex c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}
Complex Complex::operator * (Complex c) {
    return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}
Complex Complex::operator / (Complex c) {
    float denominator = c.real * c.real + c.imag * c.imag;
    float realPart = (real * c.real + imag * c.imag) / denominator;
    float imagPart = (imag * c.real - real * c.imag) / denominator;
    return Complex(realPart, imagPart);
}
int main() {
    Complex c1(4, 5), c2(1, 2);
    // Perform and display arithmetic operations
    Complex result;
    result = c1 + c2;
    cout << "Addition: ";
    result.display();

    result = c1 - c2;
    cout << "Subtraction: ";
    result.display();

    result = c1 * c2;
    cout << "Multiplication: ";
    result.display();

    result = c1 / c2;
    cout << "Division: ";
    result.display();

    return 0;
}
