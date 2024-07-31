#include <stdio.h>

int main() {
    int m[3][3],x,y,sol=-1000000;
    for (x=0;x<3;x++){
        for (y=0;y<3;y++){
            scanf("%d",&m[x][y]);
        }
    }
    for (x=0;x<3;x++){
        for (y=0;y<3;y++){
            if (m[x][y]>sol){
                sol=m[x][y];
            }
            else {

            }
        }
    }
    printf("The maximum value in the matrix is: %d",sol);
    return 0;
}