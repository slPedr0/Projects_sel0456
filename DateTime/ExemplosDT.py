import datetime as dt

# Exemplos

# Cálculo de idade

#str_nascimento = input("Sua data de nascimento (DIA/MÊS/ANO): ")
#dt_nascimento = dt.datetime.strptime(str_nascimento, "%d/%m/%Y")
#idade = dt.date.today().year-dt_nascimento.year
#print(f"{idade} Anos")

# Data exata de um registro

registro = input("Digite algo: ")
print(f"Registro: {registro}")
print("Data do registro: {}".format(dt.date.today().strftime("%d/%m/%Y")))
print("Horário do registro: {}".format(dt.datetime.now().strftime("%H:%M")))
