#include<stdio.h>

int main () {
    const float CHICO_INCREASE = 0.2;
    const float JUCA_INCREASE = 0.3;
    float juca_final_height = 1.10;
    float chico_final_height = 1.50;
    int years = 0;
    
    
    do {
        juca_final_height += JUCA_INCREASE;
        chico_final_height += CHICO_INCREASE;
        years++;
    } while (juca_final_height < chico_final_height);
    
    printf("Vai demorar %d anos", years);
}

