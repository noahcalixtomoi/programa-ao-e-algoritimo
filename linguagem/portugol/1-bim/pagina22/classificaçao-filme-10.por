/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: classificacao-filme-10.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: Identificar e exibir a categoria desse filme com base na classificação: 
* até 10 (infantil), 11-14 (infantojuvenil), 15-17 (juvenil) e acima de 17 (adulto).
*/
programa {
	funcao inicio() {
		inteiro idade
		escreva("Digite a classificação indicativa: ")
		leia(idade)

		se (idade <= 10) {
			escreva("Categoria: Infantil")
		} senao se (idade <= 14) {
			escreva("Categoria: Infantojuvenil")
		} senao se (idade <= 17) {
			escreva("Categoria: Juvenil")
		} senao {
			escreva("Categoria: Adulto")
		}
	}
}
