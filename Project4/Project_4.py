#Faça um programa que leia um arquivo com pares de números separados por 
# espaço ou vírgula e produza um arquivo de saída denominado 
# por "output.dat" no format: Linha n: Fib(x)=X Fact(y)=Y

# Funções 

def fibonacci(n):
    num = int(n)
    if num == 0 or num == 1:
        return 1
    else:
        return fibonacci(num-1)+fibonacci(num-2)

def factorial(n):
    num = int(n)
    sum = 1
    for i in range(1, num+1):
        sum *=i
    return sum

x = []
y = []

# Leitura de dados para um arquivo mais específico

#with open("dados.dat", "r") as f:
#    for i in f.readlines():
#            x.append(i.strip()[0])
#            y.append(i.strip()[-1])

# Leitura de dados para um arquivo mais genérico

with open("dados.dat", "r") as f:
    aux = ""
    x= []
    for char in f.read():
        if char.isnumeric():
            aux += str(char)
        elif aux != "":
            if len(x) <= len(y):
                x.append(aux)
            else:
                y.append(aux)
            aux=""
    if aux != "":
        if len(x) <= len(y):
            x.append(aux)
        else:
            y.append(aux)

# Cálculo de fibonacci e fatorial 

x_fib = list(map(fibonacci, x))
y_fact = list(map(factorial, y))

# Escrita de dados no arquivo de saída

with open("output.dat", "w") as f:
    for i in range(len(x_fib)):
        f.write(str(x_fib[i])+" "+str(y_fact[i])+"\n")
