#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


 
 
void itob(int n, char s[]);
void coup(char s[]);


void itob(long n, char s[]) {

    int a = 0;
    int i = 0;
    long sign = n;
   
   
    if (sign >= 0) {
        do {
            if (n >= 8) {
                a = n >> 3;
                s[i++] = n - (a << 3) + '0';
            }
            else {
                s[i++] = n + '0';
            }
        } while (n = n >> 3);


    }
    else {    
        n = n - n - n;
        do {
            if (n >= 8) {
                a = n >> 3;
                s[i++] = n - (a << 3) + '0';
            }
            else {
                s[i++] = n + '0';
            }
        } while (n = n >> 3);
    }
    s[i] = '\0';
    coup(s);




}

void coup(char s[]) {
    int c, i, j;
    int fix;
    for (fix = 0; s[fix] != '\0'; ++fix) {
        ;
    }
    for (i = 0, j = fix - 1; i < j; ++i, --j) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
