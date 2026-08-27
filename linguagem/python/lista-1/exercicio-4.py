"""
Autor: Miguel Silva Sacheto e Noah Calixto moi
Data: agosto/2026
Descrição: vc coloca um numero e ele conta de 1 ate esse numero
"""
soma = 0
contador = 1
numero = int(input("insira um numero inteiro:"))
if(numero > 0):
    while contador <= numero:
        if (contador % 2 == 0):
            soma = soma + contador
        contador += 1
    print(f"a soma dos numeros é:{soma}")
else:
    print("numero nao é par")
