#include <stdio.h>

int main()
{
    int ch;
    float wi,he,sl;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    if (ch==1){
        printf("Enter the width: ");
        scanf("%f",&wi);
        printf("Enter the height: ");
        scanf("%f",&he);
        if (he < 0 || wi < 0){
            printf("The area of the rectangle is: Error");
        }
        else {
            sl = (wi*he);
            printf("The area of the rectangle is: %.2f",sl);
        }
    }
    else if (ch==2){
        printf("Enter the base: ");
        scanf("%f",&wi);
        printf("Enter the height: ");
        scanf("%f",&he);
        if (he < 0 || wi <0){
            printf("The area of the triangle is: Error");
        }
        else {
            sl = (wi*he)/2;
            printf("The area of the triangle is: %.2f",sl);
        }
    }
    else if (ch==3){
        printf("Enter the radius: ");
        scanf("%f",&he);
        if (he<0){
            printf("The area of the circle is: Error");
        }
        else {
            sl = 3.14 * (he*he);
            printf("The area of the circle is: %.2f",sl);
        }
    }
    else {
        printf("Invalid choice");
    }
    return 0;
}
