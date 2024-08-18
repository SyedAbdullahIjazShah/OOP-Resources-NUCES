#include <iostream>
using namespace std;

class ComplexNumber {
private:
    int real;
    int imaginary;
public:
    ComplexNumber() : real(0), imaginary(0) {}
    ComplexNumber(int r, int i) : real(r), imaginary(i) {}

    // Public member functions to access private members
    int getReal() const { return real; }
    int getImaginary() const { return imaginary; }
};

// Overloaded stream insertion operator outside the class
ostream& operator<<(ostream& out, const ComplexNumber& obj) {
    out << obj.getReal(); // Accessing private member using public member function
    if (obj.getImaginary() >= 0)
        out << "+";
    out << obj.getImaginary() << "i";
    return out;
}

int main() {
    ComplexNumber c1(3, 4);
    cout << "c1 = " << c1 << endl; // Using overloaded operator for output
    return 0;
}
