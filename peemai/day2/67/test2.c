#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
        if(x >= 80){
            printf("Grade :A");
        }
        else if(x >= 75 && x < 80){
            printf("Grade :B+");
        }
        else if(x >= 70 && x < 75){
            printf("Grade :B");
        }
        else if(x >= 65 && x < 70){
            printf("Grade :C+");
        }
        else if(x >= 60 && x < 65){
            printf("Grade :C");
        }
        else if(x >= 55 && x < 60){
            printf("Grade :D+");
        }
        else if(x >= 50 && x < 55){
            printf("Grade :D");
        }
        else if(x < 50){
            printf("Grade :F");
        }
    return 0;
}