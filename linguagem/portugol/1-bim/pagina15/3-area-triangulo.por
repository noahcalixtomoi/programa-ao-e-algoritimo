/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * Arquivo: 3-area-triangulo.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler a base e a altura de um triângulo e calcular sua área 
 * através da fórmula: area = (base * altura) / 2.
 */
programa {
	funcao inicio() {
		real base, altura, area

		escreva("Informe a base do triângulo: ")
		leia(base)
		escreva("Informe a altura do triângulo: ")
		leia(altura)

		area = (base * altura) / 2

		escreva("\nBase: ", base)
		escreva("\nAltura: ", altura)
		escreva("\nÁrea do triângulo: ", area)
	}
}
