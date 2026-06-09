/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * * Arquivo: 1-ano-bissexto.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler um ano e verificar se ele é bissexto com base nas regras de
 * divisibilidade por 4, 100 e 400.
 */
programa {
	funcao inicio() {
		inteiro ano

		escreva("Digite um ano: ")
		leia(ano)

		se ((ano % 4 == 0 e ano % 100 != 0) ou (ano % 400 == 0)) {
			escreva("O ano ", ano, " é bissexto.")
		} senao {
			escreva("O ano ", ano, " NÃO é bissexto.")
		}
	}
}
