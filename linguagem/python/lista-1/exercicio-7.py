"""
Autor: Miguel Silva Sacheto e Noah Calixto moi
Data: agosto/2026
Descrição: vc coloca um numero e ele conta de 1 ate esse numero
"""
contador = 1
negativos = 0
positivos = 0
zeros = 0
while (contador <= 10):
    numeros = int(input("insira 10 numeros inteiros (positivos ou negativos):"))
    if (numeros < 0):
        negativos += 1
        contador += 1
        
    elif (numeros > 0):
        positivos += 1
        contador += 1
        
    else:
        zeros += 1
        contador += 1
        
print(f"tiveram {positivos} numeros positivos e {negativos} numeros negativos e {zeros} zeros")
