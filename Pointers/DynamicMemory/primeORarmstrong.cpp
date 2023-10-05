#include <stdio.h>
#include <math.h>


int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
    }
    return 1;
}
}

int isArmstrong(int n) {
    int originalNumber = n;
    int sum = 0;
    int digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

