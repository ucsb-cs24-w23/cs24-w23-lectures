// complex.cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include "complex.h"
using namespace std;

Complex::Complex(double re, double im)
{
    real = new double(re);
    imag = new double(im);
}
Complex::Complex(const Complex &other)
{
    real = new double(other.getReal());
    imag = new double(other.getImaginary());
}

double Complex::getMagnitude() const
{
    return sqrt(getReal() * getReal() + getImaginary() * getImaginary());
}

double Complex::getReal() const
{
    return *real;
}

double Complex::getImaginary() const
{
    return *imag;
}

void Complex::print() const
{
    if (getImaginary() >= 0)
    {
        cout << setw(2) << getReal() << " + " << setw(2) << getImaginary() << "j" << endl;
    }
    else if (getImaginary() < 0)
    {
        cout << setw(2) << getReal() << " - " << setw(2) << -getImaginary() << "j" << endl;
    }
}
void Complex::conjugate()
{
    *imag = -1 * getImaginary();
}
void Complex::setReal(double r)
{
    *real = r;
}

void Complex::setImag(double r)
{
    *imag = r;
}

void foo()
{
    Complex p(1, 2);
    Complex *q = new Complex(3, 4);
    delete q;
}

void bar()
{
    Complex x(1, 2);
    Complex y(x);
    Complex z(3, 4);
    x = z;
    cout << "x =" << x << endl;
}

int main(int argc, char const *argv[])
{
    //  foo();
    bar();
    return 0;
}
