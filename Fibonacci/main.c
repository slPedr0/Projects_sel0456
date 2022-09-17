#include <stdio.h>


// Função recursiva
int fib(int n) {
    if (n==0 || n==1) return 1;
    else return fib(n-1) + fib(n-2);
}

// Função por laço for
int fib2(int n) {
    int soma = 1, aux1 =1, aux2 = 0;
    for(int i = 0; i < n; i++) {
        soma = aux1 + aux2;
        aux2 = aux1;
        aux1 = soma;
    }
    return soma;
}

int main() {
    int result, n = 10;

    // Fibonacci recursivo 
    printf("\nSequência fibonacci recursiva até o elemento %d:\n", n);
    for(int i = 0; i < n; i++) {
        result = fib(i);
        printf("|%d| ", result);
    }
    printf("\n\n");

    // Fibonacci por laço for
    printf("\nSequência fibonacci por laço for até o elemento %d:\n", n);
    for(int i = 0; i < n; i++) {
        result = fib2(i);
        printf("|%d| ", result);
    }
    printf("\n\n");

    return 0;
}