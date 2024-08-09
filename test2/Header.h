/*#ifndef LIST
#define LIST
class Linked_list {
private:
	class Node {
	public:
		Node* pNext;
		int data;
		Node(int data);

	};
	Node* head;
	int size = 0;
public:
	Linked_list();
	Linked_list(const Linked_list& a);
	Linked_list& operator = (Linked_list& other);
	~Linked_list();
	void Push_back(int data);
	void pop_front();
	int GetSize();
	void print();
	void insert(int data, int index);
	int get(int index, bool& err);
	void erase(int index);
};
#endif


*/







































/*#pragma once
void main()
{
	setlocale(LC_ALL, "Russian");
	Complex ob;
	ob.input();
	ob.summ();
	ob.minus();
	ob.show();
	//getch();

}
class Complex
{
	float realPart, imaginaryPart, realPart2, imaginaryPart2, a, b, a2, b2; // �������� ������ Complex
	int j;
public:
	Complex(); // �����������
	void show();
	void input();
	void summ();
	void minus();
};
Complex::Complex() // ����������� ������������
{
	std::cout << "� ������������ \n";
	realPart = 0;
	imaginaryPart = 0;
	realPart2 = 0;
	imaginaryPart2 = 0;
}
void Complex::input() // �������� ������� input
{
	std::cout << "������� �������������� ����� 1�� ������������� �����\n";
	std::cin >> realPart;
	std::cout << "������� ������ ����� 1�� ������������ ����� \n";
	std::cin >> imaginaryPart;
	std::cout << "������� �������������� ����� 1�� ������������� �����\n";
	std::cin >> realPart2;
	std::cout << "������� ������ ����� 2�� ������������ ����� \n";
	std::cin >> imaginaryPart2;
}
void Complex::summ()
{
	a = realPart + realPart2;
	b = imaginaryPart + imaginaryPart2;

}
void Complex::minus()
{
	a2 = realPart - realPart2;
	b2 = imaginaryPart - imaginaryPart2;
}
void Complex::show()
{
	printf_s("(%.3f+%.3f*j)+(%.3f+%.3f*j)=%.3f + (%.3f*j)\n", realPart, imaginaryPart, realPart2, imaginaryPart2, a, b);
	printf_s("(%.3f+%.3f*j)-(%.3f+%.3f*j)=%.3f + (%.3f*j)\n", realPart, imaginaryPart, realPart2, imaginaryPart2, a2, b2);
	printf_s("\n");
	printf_s("����� ��� ��������:( %.3f , (%.3f*j) )\n", a, b);
	printf_s("����� ��� ���������:( %.3f , (%.3f*j) )\n", a2, b2);
}*/