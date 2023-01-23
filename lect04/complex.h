//complex.h
#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double re = 0, double im = 0);
    //~Complex() { print(); }
    double getMagnitude() const;
    double getReal() const;
    double getImaginary() const;
    void print() const;
    void conjugate();
    void setReal(double r);
    void setImag(double r);
};


