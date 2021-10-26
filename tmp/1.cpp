#include <iostream>
using namespace std;
class Complex
{
public:
    int real;      // To store real part of complex number
    int imaginary; // To store imaginary part of complex number
    void complex();
    void complex(int r, int i);
    void complex(Complex C);
    void addComplexNumber(Complex C1, Complex C2);
    void multiplyComplexNumber(Complex C1, Complex C2);
    void displayComplex();
};
//default
void Complex::complex()
{
    real = 1;
    imaginary = 1;
}
// Parameterized constructor
void Complex::complex(int r, int i)
{
    real = r;      // r is initialized during object creation
    imaginary = i; // i is initialized during object creation
}
//copy constructor
void Complex::complex(Complex C)
{
    real = C.real;           // r is initialized during object creation
    imaginary = C.imaginary; // i is initialized during object creation
}
void Complex::addComplexNumber(Complex C1, Complex C2)
{

    Complex res; // result object of complex class

    // adding real part of complex numbers
    res.real = C1.real + C2.real;

    // adding Imaginary part of complex numbers
    res.imaginary = C1.imaginary + C2.imaginary;

    cout << "Sum of complex number : " << res.real << " + i" << res.imaginary << endl;
}
void Complex::multiplyComplexNumber(Complex C1, Complex C2)
{

    Complex res; // result object of complex class
    res.real = (C1.real * C2.real) - (C1.imaginary * C2.imaginary);
    res.imaginary = (C1.real * C2.imaginary) + (C1.imaginary * C2.real);

    // returning the multiplication
    cout << "multiplication of complex number : " << res.real << " + i" << res.imaginary << endl;
}
void Complex::displayComplex()
{
    cout << "Complex number : " << real << " + i " << imaginary << endl;
}

int main()
{
    Complex C[3];
    C[0].complex();
    C[0].displayComplex();
    C[1].complex(8, 9);
    C[1].displayComplex();
    C[2].complex(C[1]);
    C[2].displayComplex();

    C[1].addComplexNumber(C[0], C[1]);
    C[2].multiplyComplexNumber(C[1], C[2]);

    cout << endl
         << endl;
    return 0;
}
