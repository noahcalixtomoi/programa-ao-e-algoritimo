/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * Arquivo: 2-idade-convertida.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler o nome e a idade de um usuário e exibir a idade equivalente 
 * em meses e em dias (considerando 1 ano = 365 dias).
 */
programa {
	funcao inicio() {
		cadeia nome
		inteiro idadeAnos, idadeMeses, idadeDias

		escreva("Digite o nome: ")
		leia(nome)
		escreva("Digite a idade em anos: ")
		leia(idadeAnos)

		idadeMeses = idadeAnos * 12
		idadeDias = idadeAnos * 365

		escreva("\nNome: ", nome)
		escreva("\nIdade em anos: ", idadeAnos)
		escreva("\nIdade em meses: ", idadeMeses)
		escreva("\nIdade em dias: ", idadeDias)
	}
}
