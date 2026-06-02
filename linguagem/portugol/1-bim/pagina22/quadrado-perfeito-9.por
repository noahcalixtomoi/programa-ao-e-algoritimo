/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: quadrado-perfeito-9.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: Ler um número, verificar e exibir se o número é um quadrado perfeito.
*/
programa {
	inclua biblioteca Matematica --> m
	funcao inicio() {
		inteiro num, raiz_int
		real raiz_real
		
		escreva("Digite um número: ")
		leia(num)

		raiz_real = m.raiz(num, 2.0)
		raiz_int = raiz_real // Converte para inteiro (trunca)

		se (raiz_int * raiz_int == num) {
			escreva(num, " é um quadrado perfeito.")
		} senao {
			escreva(num, " não é um quadrado perfeito.")
		}
	}
}
