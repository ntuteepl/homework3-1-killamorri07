#include <stdio.h>

int main() {
    int num, isPrime = 1;
    scanf("%d", &num);
    
    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // num is divisible by i, so it's not prime
                break;
            }
        }
    }
    
    if (isPrime) {
        printf("YES.\n");
    } else {
        printf("NO \n");
    }
    
    return 0;
}
