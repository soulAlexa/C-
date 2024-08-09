#include "my_lab.h"
#include <stdio.h>


int main() {
	int i = 0;
	int a = 0;
	int step1[25] = { 0 };
	int step[25] = { 0 };
	int pref1[25] = { 0 };
	int pref[25] = { 0 };
	int l = 0;
	int l1 = 0;

	printf("Vvedite stepen 1 polynoma");
	while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	*(step1 + 0) = i;
	l1 = i;


	while (l <= l1) {
		printf("Vvedite prefixi 1 polynoma w %d step", l);
		while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
			printf("Try again\n");
			while (getchar() != '\n');
		}

		*(pref1 + l) = i;
		l++;
	}



	printf("Vvedite stepen 2 polynoma");
	while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	*(step + 0) = i;
	l1 = i;
	l = 0;

	while (l <= l1) {
		printf("Vvedite prefixi 2 polynoma w %d step", l);
		while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
			printf("Try again\n");
			while (getchar() != '\n');
		}

		*(pref + l) = i;
		l++;
	}

	printf("Vvedite 1(sum),2(subtraction),3(multiplication)");
	while ((scanf("%d", &a) != 1) || (getchar() != '\n')) {
		printf("Try again\n");
		while (getchar() != '\n');
	}
	switch (a) {
	case 1:
		summ(step1, pref1, step, pref);
		break;
	case 2:
		sub(step1, pref1, step, pref);
		break;
	case 3:
		mult(step1, pref1, step, pref);
		break;
	default:
		printf("operation not selected");

	}

	return 0;
}