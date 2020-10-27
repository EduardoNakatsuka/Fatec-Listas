#include <iostream>
using namespace std;

void moveDisco (char origem, char destino){
    cout << origem << "-->" << destino << endl;
}

void torreHanoi (int n, char orig, char dest, char trab) {
    if (n==1) {
        printf("\nMover disco 1 da torre %c para a torre %c", orig, dest);
        return;
    }else {
        torreHanoi(n-1,orig,trab,dest);
        printf("\nMover disco %d da torre %c para a torre %c", n, orig, dest);
        torreHanoi(n-1,trab,dest,orig);
    }
};

int main () {
    int discos;
    printf("--------TORRE DE HANOI--------\n\n");
    printf("Digite a quantidade de discos: ");
    scanf("%d",&discos);
    torreHanoi(discos,'A','C','B');
    return 0;
}

