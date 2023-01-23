//complex.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include "complex.h"
using namespace std;

Complex::Complex(double re, double im)
{
    real = re;
    imag = im;
}

double Complex::getMagnitude() const
{
    return sqrt(getReal() * getReal() + getImaginary() * getImaginary());
}

double Complex::getReal() const
{
    return real;
}

double Complex::getImaginary() const
{
    return imag;
}

void Complex::print() const
{
    if (getImaginary() >= 0)
    {
        cout << setw(2) << getReal() << " +" << setw(2) << getImaginary() << "j" << endl;
    }
    else if (imag < 0)
    {
        cout << setw(2) << getReal() << " -" << setw(2) << -getImaginary() << "j" << endl;
    }
}
void Complex::conjugate()
{
    imag = -1 * getImaginary();
}
void Complex::setReal(double r)
{
    real = r;
}

void Complex::setImag(double r)
{
    imag = r;
}

void foo()
{
    Complex p(1, 2);
    Complex *q = new Complex(3, 4);
}

int main(int argc, char const *argv[])
{
    Complex p;
    Complex *q = new Complex(2, 3);
    Complex w(10, -5);
    w.conjugate();
    w.print();
    return 0;
}
