#include<stdio.h>

// 13. Criar um algoritmo que imprima a soma dos números pares entre 25 e 200.

int main(){
    int i=0, total=0;
    const int MIN = 25, MAX = 200;
    
    for(i=MIN; i<MAX; i++){
        if(i % 2 == 0){
            total = total + i;
        }
    }
    
    printf("\nTotal da soma dos números pares entre %d e %d: %d", MIN, MAX, total);
    
    return 0;
}

