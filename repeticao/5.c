#include<stdio.h>

int main () {
    int i = 0;
    
    for (i = 83; i < 108; i++) {
        if (i % 9 == 0) {
            printf("%d - ", i);
        }
    }
}
