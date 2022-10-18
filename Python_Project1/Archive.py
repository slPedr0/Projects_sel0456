
import re

with open("dados.txt","r") as f:
    with open("Novo.txt", "w") as fnew:
        fnew.write(f.read().replace(",",";"))
        