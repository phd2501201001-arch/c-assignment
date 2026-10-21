#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0)
        : real(r), imag(i) {}

    Complex add(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex subtract(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << '\n';
    }
};

int main() {
    double r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum: ";
    c1.add(c2).display();

    cout << "Difference: ";
    c1.subtract(c2).display();

    return 0;
}
