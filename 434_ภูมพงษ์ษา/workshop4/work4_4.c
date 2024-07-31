#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;
    while (count < 10) {
        scanf("%d", &number);

        if (number <= 0) {
            sum += number;
            break;
        }

        sum += number;
        count++;
    }

    printf("%d", sum);

    return 0;
}
