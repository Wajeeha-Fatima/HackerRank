#include <iostream>
using namespace std;

class Complex
{
    double real;
    double imaginary;
public:
    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(double r)
    {
        this->real = r;
        this->imaginary = 0;
    }
    Complex(double r, double i)
    {
        this->real = r;
        this->imaginary = i;
    }
    Complex(const Complex& c)
    {
        this->real = c.real;
        this->imaginary = c.imaginary;
    }
    void setReal(double r)
    {
        this->real = r;
    }
    void setImaginary(double i)
    {
        this->imaginary = i;
    }
    double getReal()
    {
        return real;
    }
    double getImaginary()
    {
        return imaginary;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = c.real + this->real;
        temp.imaginary = c.imaginary + this->imaginary;

        return temp;
    }
    Complex subtarct(Complex c)
    {
        Complex temp;
        temp.real = this->real - real;
        temp.imaginary = this->imaginary - imaginary;

        return temp;
    }
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real = (c.real * this->real) - (c.imaginary * this->imaginary);
        temp.imaginary = (c.imaginary * this->real) + (this->imaginary * c.real);

        return temp;
    }
     Complex divide(Complex c)
    {
        Complex temp;
        temp.real = ((this->real * c.real) + (this->imaginary * c.imaginary)) / (this->real * this->real) + (this->imaginary * this->imaginary);
        temp.imaginary = ((this->real * c.real) - (this->imaginary * c.imaginary)) / (this->real * this->real) + (this->imaginary * this->imaginary);
        
        return temp;
    }
    Complex conjugate(Complex c)
    {
        Complex temp;
        temp.real = c.real;
        temp.imaginary =  -(c.imaginary);

        return temp;
    }
    void print()
    {
        char sign = ' ';
        if (this->imaginary >= 0) 
            sign = '+';
        cout << this->real << " " << sign << " " << this->imaginary << "i" << endl;
    }
    friend Complex operator+(Complex a, Complex b)
    {
        Complex temp;
        temp.real = a.real + b.real;
        temp.imaginary = a.imaginary + b.imaginary;

        return temp;
    }
    friend Complex operator-(Complex a, Complex b)
    {
        Complex temp;
        temp.real = a.real - b.real;
        temp.imaginary = a.imaginary - b.imaginary;

        return temp;
    }
};
