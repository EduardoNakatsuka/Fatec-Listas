
/*
 1) Faça uma rotina recursiva para calcular a somatória de todos os número de 1 a N (N
 será lido do teclado).
*/

#include<iostream>
using namespace std;

void sum (int original, int number) {
    if (original == number) {
        cout << "O total é " << number;
    }
    
    sum(original, number++);
}

int main () {
    int inputNumber;
    
    cout << "Digite o numero desejado: \n";
    cin >> inputNumber;
    
    sum(inputNumber, 1);
}

