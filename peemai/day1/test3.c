#include <stdio.h>
 int main(){
    int a,b,s;
        a = 0;
        b = 1;
        printf("%d %d",a,b);
    for(int i = 0; i < 8; i++){
         s = a + b;
         printf(" %d",s);
         a = b;
         b = s;

    } 
    return 0;
}