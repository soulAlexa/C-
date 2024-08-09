/*#include <iostream>

#include "Header.h"
using namespace std;

Linked_list::Linked_list()
{
   int size = 0;
   char head = NULL;
}
Linked_list::Linked_list(const Linked_list& a) {
    size = a.size;
    head = new Node(a.head->data);
    Node* n = a.head;
    Node* cur = head;
    while (n != NULL)
    {
        if (n == a.head)
        {
            cur->data = n->data;
            n = n->pNext;
            continue;
        }
        cur->pNext = new Node(n->data);

        cur = cur->pNext;
        n = n->pNext;
    }
    cur->pNext = NULL;
}
Linked_list& Linked_list ::operator = (Linked_list& other)
{
    if (&other == this)
        return *this;
    Node* tmp = head;
    delete tmp;
    head = NULL;
    size = 0;
    Node* cur = other.head;
    while (cur != NULL)
    {
        Push_back(cur->data);
        cur = cur->pNext;
    }
    return *this;
}


Linked_list::Node::Node(int data) {
    this->data = data;
    this->pNext;
}
void Linked_list::Push_back(int data) {
    if (head == NULL) {
        head = new Node(data);
        head->pNext = NULL;
    }
    else
    {
        Node* cur = this->head;
        while (cur->pNext != NULL) {
            cur = cur->pNext;
        }
        cur->pNext = new Node(data);
        cur->pNext->pNext = NULL;
    }
    size++;
}
Linked_list::~Linked_list() {
    while (size) {
        pop_front();
    }
}
void Linked_list::pop_front() {
    Node* tmp = head;
    head = head->pNext;
    delete tmp;
    size--;
}
int Linked_list::GetSize() {
    return size;
}
void Linked_list::print() {
    Node* cur = head;
    for (int i = 0; cur != NULL; i++) {
        std::cout << cur->data << std::endl;
        cur = cur->pNext;
    }
}
int Linked_list::get(int index, bool& err) {
    if (index >= 0 && index <= size - 1) {
        Node* cur = head;
        if (index == 0) {
            return head->data;
        }
        for (int i = 0; i < index; i++) {
            cur = cur->pNext;
        }
        return cur->data;
    }
    else
        err = false;
    return -1;
}
void Linked_list::insert(int data, int index)
{
    if ((index < size) && (index >= 0))
    {
        Node* n = new Node(data);
        Node* cur = head;
        if (index == 0)//если в голову 
        {
            n->pNext = cur;
            head = n;
        }
        else
        {
            for (int i = 0; i < index - 1; i++)
                cur = cur->pNext;
            Node* tmp = cur->pNext;
            cur->pNext = n;
            n->pNext = tmp;
        }
        size++;
    }
}
void Linked_list::erase(int index)
{
    if ((index < size) && (index >= 0))
    {
        Node* cur = head;
        if (index == 0)//если удалить голову

        {
            Node* tmp = cur;
            head = cur->pNext;
            delete tmp;
        }
        else
        {
            for (int i = 0; i < index - 1; i++)
                cur = cur->pNext;
            Node* tmp = cur->pNext;
            cur->pNext = tmp->pNext;
            delete tmp;

        }
    }
    size--;
}



*/








































/*#include <iostream>
#include <conio.h>
#include <locale>


#include <iostream> 

class complex
{
private:
    double re, im;
public:
    complex() { re = 0; im = 0; }
    complex(double r, double i) { re = r; im = i; }
    complex(const complex& ob) { re = ob.re; im = ob.im; };
    complex& operator = (complex);
    complex operator + (complex);
    complex operator - (complex);
    complex operator * (complex&);
    complex operator / (complex&);
    complex& operator += (complex);
    complex& operator -= (complex);
    complex& operator *= (complex);
    complex& operator /=(complex);
    friend std::istream& operator >>(std::istream&, complex&);
    friend std::ostream& operator << (std::ostream&, const complex&);
    bool operator == (complex& com);
    bool operator != (complex& com);
    bool operator > (complex& com);
    bool operator < (complex& com);

};

bool complex:: operator > (complex& com)
{
    if (this->re > com.re)
        return 1;
    else if (this->re == com.re && this->im > com.im)
        return 1;
    else
        return 0;
}

bool complex ::operator < (complex& com)
{
    if (this->re < com.re)
        return 1;
    else if (this->re == com.re && this->im < com.im)
        return 1;
    else
        return 0;

}

bool complex::operator != (complex& com)
{
    if (this->re != com.re || this->im != com.im)
        return 1;
    else
        return 0;
}

bool complex::operator==(complex& com)
{
    if (this->re == com.re && this->im == com.im)
        return 1;
    else
        return 0;
}



complex complex::operator*(complex& com)
{
    double i, j;
    i = re * com.re - im * com.im;
    j = re * com.im + com.re * im;
    re = i;
    im = j;
    return *this;
}

complex complex::operator/(complex& com)
{
    double i, j, k;
    k = re * re + com.im * com.im;
    i = (re * com.re + im * com.im) / k;
    j = (com.re * im - re * com.im) / k;
    re = i;
    im = j;
    return *this;
}

complex& complex::operator =(complex com)
{
    this->re = com.re;
    this->im = com.im;
    return *this;
}

complex complex::operator+(complex com)
{
    this->re = this->re + com.re;
    this->im = this->im + com.im;
    return *this;
}

complex complex::operator-(complex com)
{
    this->re = this->re - com.re;
    this->im = this->im - com.im;
    return *this;
}


std::ostream& operator << (std::ostream& out, const complex& com)
{
    if (com.im < 0)
        out << com.re << "+i(" << com.im << ")\n";
    else
        out << com.re << "+i" << com.im << "\n";
    return out;
}

std::istream& operator >> (std::istream& in, complex& com)
{
    std::cout << "¬ведите действительную часть комплексного числа ";
    in >> com.re;
    std::cout << "¬ведите мнимую часть комплексного числа ";
    in >> com.im;
    return in;
}

complex& complex::operator+=(complex a)
{
    re += a.re;
    im += a.im;
    return *this;
}

complex& complex::operator-=(complex a)
{
    re -= a.re;
    im -= a.im;
    return *this;
}

complex& complex::operator*=(complex a)
{
    re *= a.re;
    im *= a.im;
    return *this;
}

complex& complex::operator/=(complex a)
{
    re /= a.re;
    im /= a.im;
    return *this;
}

int main()
{
    setlocale(0, "rus");
    complex com;
    std::cin >> com;
    std::cout << com << std::endl;
}*/