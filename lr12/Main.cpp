#include "My_lab.h"
#include <string>
#include <iostream>
using namespace std;


int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    double v = 0;
    setlocale(LC_ALL, "Ru");
    cout << "введите префикс целого первого числа";
    cin >> a;
    cout << "введите префикс мнимого первого числа";
    cin >> b;
    cout << "введите префикс целого второго числа";
    cin >> c;
    cout << "введите префикс мнимого второго числа";
    cin >> v;
    Comp r1(a, b), r5(c, v),r9(b,v);
    Comp r3 = r1 + r5;
    r3.print();
    Comp r4 = r1 - r5;
    r4.print();
    Comp r7 = r1 * r5;
    r7.print();
    Comp r6 = r1 / r5;
    r6.print();
    r9.print();
    //r3.print();
    //r5.print();
    
    return 0;
}

