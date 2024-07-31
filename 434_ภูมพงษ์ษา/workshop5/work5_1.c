#include <stdio.h>

int main() {
    int sum=0,x[5],a;
    for (a=0;a<5;a++){
        scanf("%d",&x[a]);
        sum = x[a] + sum;
    }
    printf("Sum of entered numbers: %d\n",sum);
    printf("Numbers in array:");
    for (a=0;a<5;a++){
        printf(" %d",x[a]);
    }
    return 0;
}
