#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
    private:
        double re, im;
    public:
        Complex(double = 0.0, double = 0.0);

        //accessors
        double real() const;
        double imag() const;
        double abs() const;
        Complex exp() const;

        //mutators
        void normalize();
};

#endif