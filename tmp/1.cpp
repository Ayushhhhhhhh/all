#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imaginary;
    Complex();
    Complex(int r, int i);
    Complex(Complex C);
    multiplyComplexNumber(Complex C1, Complex C2);
    void displayComplex();
};
//default
Complex()
{
    real = 1;
    imaginary = 1;
};
// Parameterized constructor
Complex(int r, int i)
{
    real = r;      // r is initialized during object creation
    imaginary = i; // i is initialized during object creation
};
//copy constructor
Complex(Complex C)
{
    real = C.real;           // r is initialized during object creation
    imaginary = C.imaginary; // i is initialized during object creation
};

Complex::multiplyComplexNumber(Complex C1, Complex C2)
{

    Complex res; // result object of complex class
    res.real = (C1.real * C2.real) - (C1.imaginary * C2.imaginary)d;
    res.imaginary = (C1.real * C2.imaginary) + (C1.imaginary * C2.real);

    // returning the multiplication
    cout << "multiplication of complex number : " << res.real << " + i" << res.imaginary << endl;
}
Complex::displayComplex()
{
    cout << "Complex number : " << real << " + i " << imaginary << endl;
}

int main()
{
    Complex C[3];
    C[0] = Complex(2, 2);
    C[0].displayComplex();
    // C[1].complex(3, 2);
    // C[1].displayComplex();
    // C[2].complex(C[1]);
    // C[2].displayComplex();

    // C[1].addComplexNumber(C[0], C[1]);
    // C[2].multiplyComplexNumber(C[1], C[2]);

    cout << endl
         << endl;
    return 0;
}
