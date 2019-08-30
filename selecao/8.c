#include<stdio.h>

int main () {
    int quantity = 0, product = 0;
    float total = 0.0, price = 0.0;
    
    printf("Qual o codigo do produto? ");
    scanf("%d", &product);
    
    printf("\nQual a quantidade? ");
    scanf("%d", &quantity);
    
    switch (product) {
        case 100:
            price = 1.20;
            break;
            
        case 101:
            price = 1.30;
            break;
            
        case 102:
            price = 1.50;
            break;
            
        case 103:
            price = 1.20;
            break;
            
        case 104:
            price = 1.30;
            break;
            
        case 105:
            price = 1.00;
            break;
            
        default:
            printf("\nErro");
            return 1;
    }
    
    total = price * quantity;
    
    printf("O preço final e: %.2f", total);
}
