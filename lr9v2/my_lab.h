#include <stdio.h>


void summ(int a[], int a1[], int b[], int b1 []) {
	int f = 0;

	if (*(a + 0) == *(a + 1)) {
		f = *(b + 0) + *(b + 1);
		printf("%d *x ^ %d", f, *(a + 0));
	}
	if (*(a + 0) != *(a + 1)) {
		printf("%d*x^%d + %d*x^%d", *(b + 0), *(a + 0), *(b + 1), *(a + 1));
	}
}

void sub(int a[], int a1[], int b[], int b1[]) {
	int f = 0;

	if (*(a + 0) == *(a + 1)) {
		f = *(b + 0) - *(b + 1);
		printf("%d *x ^ %d", f, *(a + 0));
	}
	if (*(a + 0) != *(a + 1)) {
		printf("%d*x^%d - %d*x^%d", *(b + 0), *(a + 0), *(b + 1), *(a + 1));
	}
}

void mult(int a[], int a1[], int b[], int b1[]) {

	printf("%d *x ^ %d", (*(b + 0)) * (*(b + 1)), (*(a + 0)) * (*(a + 1)));
}