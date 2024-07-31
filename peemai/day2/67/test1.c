#include <stdio.h>
int main(){
    float Height,Weight,BMI; 
    scanf("%f",&Weight);
    scanf("%f",&Height);
         BMI = Weight / (Height*Height);
    if(BMI < 18.5){
        printf("Your BMI is %.2f" , BMI);
        printf("\nYou are underweight.");
    }
        else if(BMI > 18.5 && BMI <= 24.9){
        printf("Your BMI is %.2f" , BMI);
        printf("\nYou are normal weight.");
    }
        else if(BMI > 25.0 && BMI <= 29.9){
        printf("Your BMI is %.2f" , BMI);
        printf("\nYou are overweight.");
    }
        else if(BMI > 30.0){
        printf("Your BMI is %.2f" , BMI);
        printf("\nYou are obese.");
    }
    return 0;
}