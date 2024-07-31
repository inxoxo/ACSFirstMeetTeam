#include <stdio.h>
    int main(){
         int n[10] = {},temp;
            for(int i = 0; i < 10; i++){
                scanf("%d", &n[i]);
            }
            for(int i = 0; i < 10 - 1; i++){
                for(int j = 0; j < 10 - i - 1;j++){
                    if(n[j] < n[j + 1]){
                        temp = n[j];
                        n[j] = n[j + 1];
                        n[j + 1] = temp;
                    }

                }

            }
        for(int i = 0; i < 10; i++){
            printf("%d ", n[i]);


        }
    return 0;
    }