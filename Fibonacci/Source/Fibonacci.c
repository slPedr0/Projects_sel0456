
int fibo_for(int n) {
    int soma = 1, aux1 =1, aux2 = 0;
    for(int i = 0; i < n; i++) {
        soma = aux1 + aux2;
        aux2 = aux1;
        aux1 = soma;
    }
    return soma;
}

int fibo_rec(int n) {
    if (n==0 || n==1) return 1;
    else return fibo_rec(n-1) + fibo_rec(n-2);
}

