#include <stdio.h>

int main() {
    int sum = 0;    
    int count = 0;  
    int i;

  
    for (i = 1; i <= 300; i++) {
        if (i % 2 != 0 && i % 7 == 0) {  
            sum += i;  
            count++;  
        }
    }

    // Calculate the average

    float average = (float)sum / count;


    printf("Sum of odd numbers from 1 to 300 divisible by 7: %d\n", sum);
    printf("Average of odd numbers from 1 to 300 divisible by 7: %.2f\n", average);

    return 0;
}
