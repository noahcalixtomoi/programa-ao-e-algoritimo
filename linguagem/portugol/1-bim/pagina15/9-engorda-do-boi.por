/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:9-engorda-do-boi.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
* Ler o peso de um boi e o percentual de engorda. Calcular e exibir o novo
*peso do boi.
*/
programa {
	funcao inicio() {
		real peso_inicial, perc_engorda, peso_novo
		escreva("Peso do boi: ")
		leia(peso_inicial)
		escreva("Percentual de engorda (%): ")
		leia(perc_engorda)
		peso_novo = peso_inicial + (peso_inicial * (perc_engorda / 100))
		escreva("O novo peso do boi é: ", peso_novo, " kg")
	}
}
