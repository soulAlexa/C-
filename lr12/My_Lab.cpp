#include "My_lab.h"
#include <string>
#include <iostream>
using namespace std;


Comp :: Comp() {
    re = 0.0;
    im = 0.0;
}

Comp :: Comp(double re, double im) {
    this->re = re;
    this->im = im;
   
}
Comp :: Comp(const Comp& r1) {
    re = r1.re;
    im = r1.im;

   
} 


 Comp Comp :: operator +(const Comp& r2) {
    Comp r3;
    r3.re = re + r2.re;
    r3.im = im + r2.im;
    return r3;

}
Comp Comp :: operator -(const Comp& r2) {
    Comp r3;
    r3.re = re - r2.re;
    r3.im = im - r2.im;
    return r3;
}
Comp Comp :: operator *(const Comp& r2) {
    Comp r3;
    r3.re = re * r2.re - im * r2.im;
    r3.im = re * r2.im + im * r2.re;
    return r3;
}
Comp Comp :: operator /(const Comp& r2) {
    Comp r3;
    double t;
    t = r2.re * r2.re + r2.im * r2.im;
    r3.re = (re * r2.re + im * r2.im) / t;
    r3.im = (im * r2.re - re * r2.im) / t;
    return r3;
}
void Comp :: print() {
    cout << re << " + " << im << "*i\n";
}







