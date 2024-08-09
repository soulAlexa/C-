#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void itob(int n, char s[]);
void coup(char s[]);

int main(void) {
    long i = 0;
    while ((scanf("%d", &i) != 1) || (getchar() != '\n')) {
        printf("Try again\n");
        while (getchar() != '\n');
    }
    char s[100];
    itob(i,s);
    printf("%s\n", s);
    return 0;
}