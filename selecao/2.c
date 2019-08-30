#include<stdio.h>

int main () {
    int buyer_type = 0;
    float sale_price, final_price;
    
    printf("Identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3): ");
    scanf("%d", &buyer_type);
    
    printf("Qual o valor da compra? ");
    scanf("%f", &sale_price);
    
    if (buyer_type == 2) {
        final_price = sale_price * 0.90;
    } else if (buyer_type == 3) {
        final_price = sale_price * 0.95;
    } else {
        final_price = sale_price;
    }
    
    printf("O preço final é: %2.f", final_price);
}

