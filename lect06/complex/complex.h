//complex.h
#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
private:
    double *real;
    double *imag;

public:
    Complex(double re = 0, double im = 0);
    Complex(const Complex& other);
    ~Complex() {  
            delete real;
            delete imag;
    }
    double getMagnitude() const;
    double getReal() const;
    double getImaginary() const;
    void print() const;
    void conjugate();
    void setReal(double r);
    void setImag(double r);
    //friend ostream& operator<<(ostream& out, const Complex& x);
    // If a non-member function needs to access private member variables
    // of a class, declare it as a friend function (see above)
    Complex operator+(const Complex& y){
       // cout << "Member function add"<< endl;
    return Complex(this->getReal() + y.getReal() , 
                   this->getImaginary() + y.getImaginary() );
}

};
// //non-member add
// Complex operator+(const Complex& x, const Complex& y){
//     cout << "Non-Member function add"<< endl;
//     return Complex(x.getReal() + y.getReal() , 
//                    x.getImaginary() + y.getImaginary() );
// }

ostream& operator<<(ostream& out, const Complex& x){
   // cout << " Overloaded << "<< endl;
   // cout << x.real << " + j "<< x.imag <<endl;
   // Preferable to use the public  functions 
    x.print(); 
    return out;
}



