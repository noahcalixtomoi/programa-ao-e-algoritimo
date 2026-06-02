/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: maior-numero-8.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: Ler três números inteiros e exibir o maior desses três números.
*/
programa {
	funcao inicio() {
		inteiro n1, n2, n3, maior
		escreva("Digite três números: \n")
		leia(n1, n2, n3)

		se (n1 >= n2 e n1 >= n3) {
			maior = n1
		} senao se (n2 >= n1 e n2 >= n3) {
			maior = n2
		} senao {
			maior = n3
		}
		escreva("O maior número é: ", maior)
	}
}
