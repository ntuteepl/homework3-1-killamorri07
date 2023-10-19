#include <stdio.h>

int main() {
    int input1, input2;

    printf("Enter two integers: ");
    scanf("%d %d", &input1, &input2);

    int sum1 = 0, sum2 = 0;

    // Sum the digits of input1
    for (int num = input1; num != 0; num /= 10) {
        sum1 += num % 10;
    }

    // Sum the digits of input2
    for (int num = input2; num != 0; num /= 10) {
        sum2 += num % 10;
        
    }

    
    return 0;
}
