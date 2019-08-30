#include<stdio.h>

int main () {
    int age[2], i = 0, average = 0, total = 0;
    
    for (i = 0; i < 2; i++) {
        printf("Digite o numero %d", i + 1);
        scanf("%d", &age[i]);
        
        total += age[i];
    }
    
    average = total / 2;
}

