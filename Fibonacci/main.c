#include <stdio.h>

int fib(int n) {
    if (n==0 || n==1) return 1;
    else return fib(n-1) + fib(n-2);
}

int main() {
    int result, n = 10;
    
    printf("\nSequência fibonacci até o elemento %d:\n", n);
    for(int i = 0; i < n; i++) {
        result = fib(i);
        printf("|%d| ", result);
    }
    printf("\n\n");

    return 0;
}