"""
Autor: Miguel Silva Sacheto e Noah Calixto moi
Data: agosto/2026
Descrição: vc coloca um numero e ele conta de 1 ate esse numero
"""
quantidade = 0
soma = 0
notas = float(input("insira a nota de 1 a 10 (utilize um numero diferente desses para parar):"))
while(notas <= 10 and notas >= 1):
    soma = soma + notas
    notas = float(input("digite outra nota de 1 a 10:"))
    quantidade += 1
if (quantidade > 0):
    media = soma / quantidade
    print (f" a media das notas é {media} ")
else:
    print("Nenhuma nota valida foi digitada.")
