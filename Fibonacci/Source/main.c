#include <stdio.h>
#include <unistd.h>
#include "Fibonacci.h" 

int main() {

    // Declaração de variáveis
    int result, n, opt;
    
    // Coleta do usuário o último elemento a ser exibido
    do {
    printf("\nEscolha até qual elemento da sequência fibonacci o programa deve exibir: ");
    scanf("%d", &n);
    if(n<=0) {
        printf("\nA sequência precisa ter pelo menos 1 elemento!\n");
        sleep(1);
    }
    } while(n<=0);

    // Escolha de qual método utilizar
    do {   
    printf("\nQual método deseja utilizar?\n"
            "0 - Recursivo\n"
            "1 - Laço For\n"
            "Sua escolha: ");
    scanf("%d", &opt);
    if (opt != 0 && opt != 1) {
        printf("\nOpção Inválida! Escolha novamente.\n");
        sleep(1);
    }
    } while(opt != 0 && opt != 1);

    if(!opt) {

    // Fibonacci recursivo 
    printf("\nSequência fibonacci por recursividade até o elemento %d:\n", n);
    for(int i = 0; i < n; i++) {
        result = fibo_rec(i);
        printf("|%d| ", result);
    }
    printf("\n\n");
    } else {

    // Fibonacci por laço for
    printf("\nSequência fibonacci por laço for até o elemento %d:\n", n);
    for(int i = 0; i < n; i++) {
        result = fibo_for(i);
        printf("|%d| ", result);
    }
    printf("\n\n");
    }

    return 0;
}