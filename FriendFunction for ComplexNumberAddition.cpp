#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    void setData(int r, int i);
    void display();
    friend Complex addComplex(Complex c1, Complex c2);
};

void Complex::setData(int r, int i) {
    real = r;
    imag = i;
}

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.setData(c1.real + c2.real, c1.imag + c2.imag);
    return temp;
}

void Complex::display() {
    cout << "Complex number: " << real << " + " << imag << "i" << endl;
}

int main() {
    Complex num1, num2, result;

    num1.setData(2, 5);
    cout << "First ";
    num1.display();

    num2.setData(1, 4);
    cout << "Second ";
    num2.display();

    result = addComplex(num1, num2);
    cout << "Sum of the two complex numbers: ";
    result.display();

    return 0;
}
