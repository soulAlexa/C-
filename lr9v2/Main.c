#include <stdio.h>

void summ(int a[], int b[]);
void sub(int a[], int b[]);
void mult(int a[], int b[]);


int main() {
	int i = 0;
	int a = 0;
	int  step1[25] = { 0 };
	int  step[25] = { 0 };
	int pref1[25] = { 0 };
	int pref[25] = { 0 };
	int c = 0;
	int f = 0;
	int j = 0;
	int fix = 0;

	printf("Vvedite stepeni 1 polynoma bez probalov");
	while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	for (i; i != 0; i /= 10) {
		*(step1 + a) = i % 10;
		a++;
	}


	for (fix = 0; step1[fix] != '\0'; ++fix) {
		;
	}
	for (i = 0, j = fix - 1; i < j; ++i, --j) {
		c = step1[i];
		step1[i] = step1[j];
		step1[j] = c;
	}
	
	a = 0;
	printf("Vvedite stepeni 1 polynoma bez probalov");
	while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	for (i; i != 0; i /= 10) {
		*(step + a) = i % 10;
		a++;
	}
	for (fix = 0; step[fix] != '\0'; ++fix) {
		;
	}
	for (i = 0, j = fix - 1; i < j; ++i, --j) {
		c = step[i];
		step[i] = step[j];
		step[j] = c;
	}
	
	a = 0;

	printf("Vvedite stepeni 1 polynoma bez probalov");
	while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	for (i; i != 0; i /= 10) {
		*(pref1 + a) = i % 10;
		a++;
	}
	for (fix = 0; pref1[fix] != '\0'; ++fix) {
		;
	}
	for (i = 0, j = fix - 1; i < j; ++i, --j) {
		c = pref1[i];
		pref1[i] = pref1[j];
		pref1[j] = c;
	}
	
	
	a = 0;
	printf("Vvedite stepeni 1 polynoma bez probalov");
	while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	for (i; i != 0; i /= 10) {
		*(pref + a) = i % 10;
		a++;
	}
	for (fix = 0; pref[fix] != '\0'; ++fix) {
		;
	}
	for (i = 0, j = fix - 1; i < j; ++i, --j) {
		c = pref[i];
		pref[i] = pref[j];
		pref[j] = c;
	}
	printf("Vvedite 1(sum),2(subtraction),3(multiplication)");
	while ((scanf("%d", &a) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	switch (a) {
	case 1:
		summ(step1, pref1,step ,pref);
		break;
	case 2:
		sub(step, pref, step, pref);
		break;
	case 3:
		mult(step, pref, step, pref);
		break;
	default:
		printf("operation not selected");

	}
	
	return 0;
}

