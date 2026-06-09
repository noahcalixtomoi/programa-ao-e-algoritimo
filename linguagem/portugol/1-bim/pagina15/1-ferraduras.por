/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * Arquivo: 1-calculo-ferraduras.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler a quantidade de cavalos adquiridos e calcular a quantidade 
 * de ferraduras necessárias (4 por cavalo).
 */
programa {
	funcao inicio() {
		inteiro cavalos, ferraduras

		escreva("Quantidade de cavalos comprados: ")
		leia(cavalos)

		ferraduras = cavalos * 4

		escreva("\nNovos cavalos: ", cavalos)
		escreva("\nQuantidade de ferraduras: ", ferraduras)
	}
}
