#include <stdio.h>

/*char* fackingstrstr(const char* string, const char* word)
{
   
    const char* a = 0, * b = 0;
    a = word;
    while (*string) {

        b = string;
        while (*(string++) == *(word++))
        {
            if (!(*word))
            {
                return (char*)b;
            }
            if (!(*string)) {

                return NULL;
            }
            
            
        }
        word = a;
    }
         
    return NULL;
}
*/


char* fg(const char * a, const char * b) {
    static char c[120];
    static char v[30];
    static char n[3];
    static char m[3];
    int f = 0;
    int h = 0;
    if (*(n + 0) == 0) {
        *(n + 0) = *(a + 0);
        *(n + 1) = 'c';
        


       
        if (*(a + f) == *(n + 0)) {
            for (f = 0; *(a + f) != '\0'; f++) {
                *(c + f) = *(a + f);
            }
            f++;
            *(c + f) = '\0';
          
        }
    }
    if (*(m + 0) == 0) {
        *(m + 0) = *(b + 0);
        *(m + 1) = 'm';
       


        if (*(b + h) == *(m + 0)) {
            for (h = 0; *(b + h) != '\0'; h++) {
                *(v + h) = *(b + h);
            }
            h++;
            *(v + h) = '\0';
            
        }
    }
    static int i = 0;
    int k = 0;
    int j = 0;
    static char * l = 0;
    
    for (i; *(c + i) != '\0'; i++)
    {
        
        if (*(c + i) == *(v + 0)) {
            
            for (j = 0, k = i; *(c + k) != '\0' && *(v + j) == *(c + k); j++, k++) {
                j++;
                
                
                if (*(v + j) == '\0') {
                    i++;
                    l = (c + i);
                    return ((char*)l - c);
                }
                j--;
            }


        }
    }
    
    return NULL;
    
}



int main(void)
{

    char array[120];
    char word[25];
    char* ptr;
    int i = 0, j = 0, k = 0, c = 0, l = 0, g = 0, f = 0, a = 0;


    printf("Enter string: ");
    while ((g = getchar()) != '\n') {
        if (f < 101) {
            array[l] = g;
            l++;
            f = l;
            a++;
        }
        else {
            printf("You have entered too many characters\n");
            break;


        }
    }
    if (a <= 100) {
        array[l] = '\0';
        l = 0;
        f = 0;
        a = 0;
        printf("Enter word: ");
        while ((g = getchar()) != '\n') {
            if (f < 21) {
                word[l] = g;
                l++;
                f = l;
                a++;
            }
            else {
                printf("You have entered too many characters\n");
                break;
            }
        }
        if (a <= 20) {
            word[l] = '\0';




            ptr = fg(array, word);
            if (ptr == NULL) {
                printf("Covpadeni ne naideno");
            }
            while (ptr) {
                printf("position = %i\n", ptr);

                ptr = fg(NULL, NULL);
            }


            
        }

    }
    return 0;
}