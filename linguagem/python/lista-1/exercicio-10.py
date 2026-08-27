senha_correta = 1234
limite_tentativas = 3
tentativas = 0

while tentativas < limite_tentativas:
    senha = int(input("Digite a senha: "))
    tentativas += 1

    if senha == senha_correta:
        print("Acesso liberado.")
        break
    else:
        restantes = limite_tentativas - tentativas

        if restantes > 0:
            print("Senha incorreta. Tentativas restantes:", restantes)

if senha != senha_correta:
    print("Acesso bloqueado.")
