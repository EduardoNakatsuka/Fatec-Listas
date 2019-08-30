#include<stdio.h>

int main () {
    int i = 0;
    
    for (i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            printf("%d e numero par\n ", i);
        }
    }
}

