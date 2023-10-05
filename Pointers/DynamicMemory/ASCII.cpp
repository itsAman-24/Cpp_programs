#include <stdio.h>

int main() {
    int asciiValue;

    for (asciiValue = 32; asciiValue <= 126; asciiValue++) {
        
        printf(" %d = '%c'\n", asciiValue, (char)asciiValue);
    }

    return 0;
}