#include <iostream>
#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <fstream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");


	ofstream fill;
	string f = "C:/2222222/fpp.txt";
	/*fill.open(f, ofstream :: app);
	if (fill.is_open()) {
		fill << " \n����� ������ "; // ������ ������ � ����
		fill.close(); // ��������� ����

		
		return 0;
	}*/
	ifstream fitt;
	fitt.open(f);
	char ch;
	while (fitt >> ch) {
		cout << ch << "\n";
	}
}
	
	
	/*setlocale(LC_ALL, "RU");
	
	
	
	
		char str[] = "��� ��������� Linux �������� � Linux Ubuntu ";

		cout << strstr(str, "Linux") << std::endl; // ����� ��������� � ������
		return 0;
	}

	*/
	/*
		char str1[] = "� �������������";
		char str2[40];
		char str3[80];
		strcpy(str2, str1);                              // �������� ������ str1 � str2
		strcpy(str3, "����������� ��������� �������\n"); // �������� ������ �� ������ ��������� � str3
		cout << "str1: " <<  str1 << "\nstr2: " <<  str2 << "\nstr3: " << str3;
		unsigned char src[10] = "1234599"; // ������ �������� ������
		unsigned char dst[10] = "";
		char stt[50];
		memcpy(dst, src, 5);
		strcpy(stt, "��� ");
		strcat(stt, "������bbbbasdasdasdadasda");
		cout << stt << endl;
		
		return 0;
	}
	*/
	/*
		srand(time(0)); // �������������� ������������
		cout << "rand_value = " << rand() << "\n"; //endl;
		system("pause");
		return 0;
		int a =  
	}
    */
	/*(const int s = 40;
	unsigned int g = 0;
	g = srand(time(0));
	cout << RAND_MAX  << "\n";
	//int g = rand();
	//cout << g << "\n";
	int f = rand() % 3 + 1;
	cout << f << "\n";

}
*/