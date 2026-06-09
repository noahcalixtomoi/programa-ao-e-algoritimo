/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * * Arquivo: 2-classificacao-triangulo.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler três valores, verificar se podem formar um triângulo e 
 * classificá-lo como Equilátero, Isósceles ou Escaleno.
 */
programa {
	funcao inicio() {
		real a, b, c

		escreva("Lado A: ") leia(a)
		escreva("Lado B: ") leia(b)
		escreva("Lado C: ") leia(c)

		se (a < b + c e b < a + c e c < a + b) {
			se (a == b e b == c) {
				escreva("Triângulo Equilátero")
			} senao se (a == b ou b == c ou a == c) {
				escreva("Triângulo Isósceles")
			} senao {
				escreva("Triângulo Escaleno")
			}
		} senao {
			escreva("Os valores não formam um triângulo.")
		}
	}
}
