#include <stdio.h>

int main()
{
    float hi,we,bmi ;
    char tier[50];
    scanf("%f", &we);
    scanf("%f", &hi);
    bmi = we / (hi*hi);
    printf("Your BMI is %.2f\n",bmi);

    if (bmi < 18.5) {
        sprintf(tier, "You are underweight.");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        sprintf(tier, "You are normal weight.");
    }
    else if (bmi >= 25.0 && bmi < 29.9) {
        sprintf(tier, "You are overweight.");
    }
    else {
        sprintf(tier, "You are obese.");
    }

    printf(tier);

    return 0;
}