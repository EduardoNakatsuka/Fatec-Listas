#include<stdio.h>

int main () {
    const int MIN = 12;
    int i = 0, j = 0, total = 0;
    
    for(i = MIN; i < 89; i++){
        total = 0;
        
        for (j = i; j > MIN; j--){
            total = total + j;
        }
        printf("\n%d: %d", i, total);
    }
    
    return 0;
}

