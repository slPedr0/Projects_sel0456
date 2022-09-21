# NOME DO PROJETO - VARIÁVEL
NAME = Fibonacci.exe

# COLHENDO ARQUIVOS
C_FILES=$(wildcard ./Source/*.c)
H_FILES=$(wildcard ./Source/*.h)
O_FILES=$(subst .c,.o,$(subst Source,Objects,$(C_FILES)))

# COMANDOS DE COMPILAÇÃO
all: oFolder $(NAME)

oFolder:
	@ mkdir -p Objects

$(NAME): $(O_FILES)
	@ echo 'Building $@...'
	@ gcc $^ -o $@
	@ echo 'Done!'

./Objects/%.o: ./Source/%.c ./Source/%.h
	@ echo 'Building dependencies: $@'
	@ gcc $< -c -o $@

./Objects/main.o: ./Source/main.c
	@ gcc $< -c -o $@

# COMANDO PARA LIMPAR ARQUIVOS NÃO-ESSENCIAIS
clean:
	@ echo 'Cleaning unuseful files...'
	@ rm -rf ./Objects/*.o $(NAME) 
	@ rmdir Objects