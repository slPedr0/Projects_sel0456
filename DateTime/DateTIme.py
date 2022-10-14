
import datetime as dt

# Data

hoje = dt.date.today()

data = dt.date(1990,5,12)

print(hoje.day)
print(hoje.month)
print(hoje.year)

# Tempo 
print("-"*25)

horario = dt.time(15,20,00)

print(horario.hour)
print(horario.minute)
print(horario.second)

# Data + Tempo
print("-"*25)


datatempo = dt.datetime(1999,6,22,14,30,00)

agora = dt.datetime.now()

print(agora)
print(agora.hour)

# Diferença de Data e Tempo
print("-"*25)

print(hoje-data)
print(agora-datatempo)

# Usando formatação de strings
print("-"*25)

hoje_str = hoje.strftime("%d/%m/%Y")
print(hoje_str)
print(type(hoje_str))

# Formatando string para classe datetime
print("-"*25)

data_dt = dt.datetime.strptime("22/06/2000", "%d/%m/%Y")

print(data_dt)
print(type(data_dt))