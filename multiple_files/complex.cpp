#include<iostream>
#include<math.h>
#include"complex.h"

Complex::Complex(double r, double i):
re(0),im(0)
{
    re = r;
    im = i;
}

double Complex::real() const{
    return re;
}
double Complex::imag() const{
    return im;
}
double Complex::abs() const{
    return sqrt(re * re + im * im);
}
Complex Complex::exp() const{
    double exp_re = std::exp(re);
    return Complex(exp_re * std::cos(im), exp_re * std::sin(im));
}
void Complex::normalize(){
    if (re == 0 && im == 0){
        return;
    }
    double absval = abs();
    re /= absval;
    im /= absval;
}