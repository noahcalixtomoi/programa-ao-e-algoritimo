/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:7-salario-comissao.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
*  Ler a base menor, a base maior e a altura. Calcular e mostrar a área de
*um trapézio: (base menor + base maior) + altura / 2.
*/
programa {
	funcao inicio() {
		real b_menor, b_maior, altura, area
		escreva("Base menor: ")
		leia(b_menor)
		escreva("Base maior: ")
		leia(b_maior)
		escreva("Altura: ")
		leia(altura)
		area = ((b_menor + b_maior) * altura) / 2
		escreva("A área do trapézio é: ", area)
	}
}
