#include <stdio.h>

int main()
{  
    int i,j,res;
    scanf("%d",&i);
    j = 1;
    for (j = 1;j <=12;j++){
        printf("%d * %d = %d\n",i,j,i*j);
    }
    return 0;
}