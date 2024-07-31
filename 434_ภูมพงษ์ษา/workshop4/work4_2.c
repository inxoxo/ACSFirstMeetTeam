#include <stdio.h>

int main()
{  
    int a,i,j,res;
    i = 0;
    j = 1;
    for (a = 1;a <=10;a++){
        res= i+j;
        printf("%d ",i);
        i=j;
        j=res;
    }
    return 0;
} 