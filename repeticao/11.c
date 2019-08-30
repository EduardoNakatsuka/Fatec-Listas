#include<stdio.h>

int main () {
    int i = 0;
    
    for (i = 2; i < 600; i++) {
        if (i % 2 == 0){
            printf("\n%d", i);
        }
    }
    
    return 0;
}

