#include <stdio.h>

int main() {
    int number,x,a,b;
    scanf("%d", &number);
    for (a=1;a<=number;a++){
        for (b=0;b<a;b++)
        {
            printf("*");
        }
    printf("\n");
    }

    return 0;
}
