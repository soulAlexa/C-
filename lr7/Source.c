#include <stdio.h>

int main(void) {
    int ar[100] = { -120,-50,-2,8,300,33 };
    int a = 0;
    int b = 0;
    int i = 0;

    printf("ck chisel");
    scanf("%d", &b);
    printf("Wvedite chisla");
    for (i = 0; i < b; i++) {
        scanf("%d", (ar + i));
    }
    printf("blis chislo");
    scanf("%d", &a);
    printf("%d", fc(ar, b, a));



    return 0;

}



int  fc(const int* a, const int c,const int b) {

    int l = 0;
    int i = 0;
    int k = 0;
    int ma = 0;
    int h = 0;
    int max[] = { 0,0,0,0,0 };


    for (i = 0; i < c; i++) {
        if (*(a + i) >= b && b >= 0) {
            k = (*(a + i) - b);
        }
        if (*(a + i) <= b && b >= 0) {
            k = (b - *(a + i));
        }
        if (*(a + i) >= b && b <= 0) {
            k = (*(a + i) - b);
        }
        if (*(a + i) <= b && b <= 0) {
            k = (b - *(a + i));
        }
        if (ma == 0) {
            ma = k;
            *(max + 0) = *(a + i);
        }
        if (ma > k) {
            ma = k;
            *(max + 0) = *(a + i);
        }
        if (k == 0) {
            ma = k;
            *(max + 0) = *(a + i);
            break;

        }
    }
    //printf("%d\n", *(max + 0));
        for (i = 0; i < c; i++) {
            if (*(a + i) >= b && b >= 0) {
                k = (*(a + i) - b);
            }
            if (*(a + i) <= b && b >= 0) {
                k = (b - *(a + i));
            }
            if (*(a + i) >= b && b <= 0) {
                k = (*(a + i) - b);
            }
            if (*(a + i) <= b && b <= 0) {
                k = (b - *(a + i));
            }
            if (ma == k) {
                //printf("%d\n", *(max + 0));
                if (*(max + 0) != *(a + i)) {
                    l++;
                    *(max + l) = *(a + i);
                    //printf("%d\n", *(max + 0));
                }

            }

    }
        //printf("%d\n", *(max + 0));
        i = 0;
        for (i = 0; i < l; i++){
           
            printf("%d\n", *(max + 0));
        }
    return NULL;
}