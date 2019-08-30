#include<stdio.h>

int main () {
    int i = 0, numbers[2], total = 0;
    
    do {
        for (i = 0; i < 2; i++) {
            printf("Digite o numero %d: ", i + 1);
            scanf("%d", &numbers[i]);
        }
    } while (numbers[0] > numbers[1]);
    
    for (i = numbers[0]; i <= numbers[1]; i++) {
        total = total + i;
    }
    
    printf("%d", total);
}
