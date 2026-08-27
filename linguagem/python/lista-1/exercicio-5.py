"""
Autor: Miguel Silva Sacheto e Noah Calixto moi
Data: agosto/2026
Descrição: vc coloca um numero e ele conta de 1 ate esse numero
"""
tabuada = 1
while True:
    numero = int(input("insira um numero de 1 a 10:"))
    if (numero >= 1 and numero <= 10):
        while (tabuada <= 10):
            resultado = numero * tabuada
            print (f"{numero}x{tabuada}={resultado}")
            tabuada += 1
        break
    else:
        print("numero invalido, tente novamente")
