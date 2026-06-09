/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * Arquivo: 4-media-ponderada.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler 4 notas e calcular a média ponderada com os pesos 
 * 1, 2, 3 e 4 respectivamente.
 */
programa {
	funcao inicio() {
		real n1, n2, n3, n4, media

		escreva("Nota 1 (peso 1): ") leia(n1)
		escreva("Nota 2 (peso 2): ") leia(n2)
		escreva("Nota 3 (peso 3): ") leia(n3)
		escreva("Nota 4 (peso 4): ") leia(n4)

		// Cálculo da média ponderada: (soma das notas*pesos) / (soma dos pesos)
		// Soma dos pesos = 1 + 2 + 3 + 4 = 10
		media = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4) / 10

		escreva("\nNotas lidas: ", n1, ", ", n2, ", ", n3, ", ", n4)
		escreva("\nMédia Ponderada: ", media)
	}
}
