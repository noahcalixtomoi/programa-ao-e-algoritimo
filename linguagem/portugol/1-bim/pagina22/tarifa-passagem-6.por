/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: tarifa-passagem-6.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: Determinar o preço da passagem pela idade: até 2 anos (gratuita), 
* 3 a 12 anos (meia tarifa) e acima de 12 anos (tarifa completa).
*/
programa {
	funcao inicio() {
		inteiro idade
		escreva("Idade do passageiro: ")
		leia(idade)

		se (idade <= 2) {
			escreva("Tarifa: Gratuita")
		} senao se (idade <= 12) {
			escreva("Tarifa: Meia Tarifa")
		} senao {
			escreva("Tarifa: Tarifa Completa")
		}
	}
}
