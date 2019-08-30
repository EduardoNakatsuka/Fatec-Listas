#include<stdio.h>

int main () {
    int numbers[50], i = 0;
    
    numbers[0] = 0;
    numbers[1] = 1;
    for (i = 0; i < 50; i++) {
        numbers[i] = numbers[i-1] + 1;
        printf("%d - ", numbers[i]);
    }
}

