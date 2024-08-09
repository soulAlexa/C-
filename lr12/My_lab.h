//#include <string>
//#include <iostream>
//using namespace std;
#ifndef COMP_H
#define COMP_H

class Comp
{
private:
	double re;
	double im;

public:

	Comp();
	Comp(double re, double im);
	Comp(const Comp& r1);
	Comp operator +(const Comp& r2);
	Comp operator -(const Comp& r2);
	Comp operator *(const Comp& r2);
	Comp operator /(const Comp& r2);
	void print();
};
	


#endif






/*
class Comp
{
private:
    double re;
    double im;

public:

    Comp() {
        re = 0.0;
        im = 0.0;
    }
    Comp(double re, double im) {
        this->re = re;
        this->im = im;
        //cout << re << " + " << im << "*i\n";
    }
    Comp(const Comp& r1) {
        re = r1.re;
        im = r1.im;

        //cout << re << " + " << im << "*i\n";
    }


    Comp operator +(const Comp& r2) {
        Comp r3;
        r3.re = re + r2.re;
        r3.im = im + r2.im;
        return r3;

    }
    Comp operator -(const Comp& r2) {
        Comp r3;
        r3.re = re - r2.re;
        r3.im = im - r2.im;
        return r3;
    }
    Comp operator *(const Comp& r2) {
        Comp r3;
        r3.re = re * r2.re - im * r2.im;
        r3.im = re * r2.im + im * r2.re;
        return r3;
    }
    Comp operator /(const Comp& r2) {
        Comp r3;
        double t;
        t = r2.re * r2.re + r2.im * r2.im;
        r3.re = (re * r2.re + im * r2.im) / t;
        r3.im = (im * r2.re - re * r2.im) / t;
        return r3;
    }
    void print() {
        cout << re << " + " << im << "*i\n";
    }

};*/