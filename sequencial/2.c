#include<stdio.h>

int main () {
    float inches;
    const float conversao = 2.54;

    printf("Digite em polegadas: ");
    scanf("%f", &inches);

    inches *= conversao;

    printf("\nO resultado é: %.2f cm", inches);
}

