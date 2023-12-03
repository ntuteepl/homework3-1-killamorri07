#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int input1, input2;

    //printf("Enter two integers: ");
    scanf("%d %d", &input1, &input2);

    int sum1 = sumOfDigits(input1);
    int sum2 = sumOfDigits(input2);

    if (sum1 == sum2) {
        printf("%d\n", sum1);
        if (input1 < input2) {
            printf("%d\n", input1);
        } else if (input2 < input1) {
            printf("%d\n", input2);
        } 
    } else {
        if (sum1 < sum2) {
            printf("%d\n", input1);
        } else {
            printf("%d\n", input2);
        }
    }

    return 0;
}
