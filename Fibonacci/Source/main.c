#include <stdio.h>
#include <unistd.h>
#include "Fibonacci.h" 

int main() {

    // Declaração de variáveis
    int result, n, opt[2];
    
    // Coleta do usuário o último elemento a ser exibido
    do {
    printf("\nEscolha um elemento da sequência fibonacci: ");
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
        scanf("%d", &opt[0]);
        printf("\nSelecione uma opção:\n"
                "0 - Mostrar toda a sequência até o elemento escolhido\n"
                "1 - Mostrar apenas o valor do elemento\n"
                "Sua escolha: ");
        scanf("%d", &opt[1]);
    if (opt[0] != 0 && opt[0] != 1 && opt[1] != 0 && opt[1] != 1) {
        printf("\nOpção Inválida! Escolha novamente.\n");
        sleep(1);
    }
    } while(opt[0] != 0 && opt[0] != 1 && opt[1] != 0 && opt[1] != 1);

    if(!opt[1]) {
        if(!opt[0]) {

            // Fibonacci recursivo 
            printf("\nSequência fibonacci por recursividade até o elemento %d:\n", n);
            for(int i = 0; i < n; i++) {
                result = fibo_rec(i);
                printf("|%d| ", result);
            }
        } else {

            // Fibonacci por laço for
            printf("\nSequência fibonacci por laço for até o elemento %d:\n", n);
            for(int i = 0; i < n; i++) {
                result = fibo_for(i);
                printf("|%d| ", result);
            }
        }
    } else {
        if(!opt[0]) {
            printf("\nElemento %d da sequência fibonacci calculado por recursividade: ", n);
                result = fibo_rec(n-1);
                printf("|%d| ", result);
            
        } else {
            printf("\nElemento %d da sequência fibonacci calculado por laço for: ", n);
                result = fibo_for(n-1);
                printf("|%d| ", result);
        }

    }
    printf("\n\n");
    return 0;
}