/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 6-kg-para-grama.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
* Ler o peso de uma pessoa em quilos, calcular e mostrar o peso em
*gramas.
*/
programa {
	funcao inicio() {
		real peso_kg, peso_g
		escreva("Peso em quilos (kg): ")
		leia(peso_kg)
		peso_g = peso_kg * 1000
		escreva("O peso em gramas é: ", peso_g, "g")
	}
}
