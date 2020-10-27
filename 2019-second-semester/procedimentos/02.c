#include<stdio.h>
#include<string.h>
#include<math.h>

/*Faça um procedimento que recebe por parâmetro o raio de uma esfera e calcula o seu
 volume (v = 1.33 * PI * R³). Pesquise e use a função pow() para a exponenciação.*/

#define PI 3.14

float Volume(float raio){
    float v= 1.33 * (PI*pow(raio,3));
    return v;
}

int main () {
    float Radius, result;
    
    printf("Digite o raio de uma esfera para calcular o seu volume: ");
    scanf("%f",&Radius);
    
    result = Volume(Radius);
    printf("%.2f\n",result);
    
    getchar();
}
