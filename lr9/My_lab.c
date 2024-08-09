
#include <stdio.h>



void summ(int a[], int a1[], int b[], int b1[]) {
	int i = 0;
	int f = 0;
	if (*(a + 0) == *(b + 0)) {
		for (i = 0; i <= *(a + 0); i++) {
			*(a1 + i) = *(a1 + i) + *(b1 + i);
			printf("%d*x^%d+", *(a1 + i), i);
		}
	}
	if (*(a + 0) != *(b + 0)) {
		f = *(a + 0) - *(b + 0);
		if (f < 0) {
			*(a + 0) = *(a + 0) + (f * -1);
		}
		for (i = 0; i <= *(a + 0); i++) {
			*(a1 + i) = *(a1 + i) + *(b1 + i);
			printf("%d*x^%d+", *(a1 + i), i);
		}

	}
}
void sub(int a[], int a1[], int b[], int b1[]) {
	int i = 0;
	int f = 0;
	if (*(a + 0) == *(b + 0)) {
		for (i = 0; i <= *(a + 0); i++) {
			*(a1 + i) = *(a1 + i) - *(b1 + i);
			printf("%d*x^%d+", *(a1 + i), i);
		}
	}
	if (*(a + 0) != *(b + 0)) {
		f = *(a + 0) - *(b + 0);
		if (f < 0) {
			*(a + 0) = *(a + 0) + (f * -1);
		}
		for (i = 0; i <= *(a + 0); i++) {
			*(a1 + i) = *(a1 + i) - *(b1 + i);
			printf("%d*x^%d+", *(a1 + i), i);
		}

	}
}
void mult(int a[], int a1[], int b[], int b1[]) {
	int i = 0;
	int f = 0;
	if (*(a + 0) == *(b + 0)) {
		for (i = 0; i <= *(a + 0); i++) {
			*(a1 + i) = *(a1 + i) * *(b1 + i);
			printf("%d*x^%d+", *(a1 + i), i);
		}
	}
	if (*(a + 0) != *(b + 0)) {
		f = *(a + 0) - *(b + 0);
		if (f < 0) {
			*(a + 0) = *(a + 0) + (f * -1);
		}
		for (i = 0; i <= *(a + 0); i++) {
			*(a1 + i) = *(a1 + i) * *(b1 + i);
			printf("%d*x^%d+", *(a1 + i), i);
		}

	}
}