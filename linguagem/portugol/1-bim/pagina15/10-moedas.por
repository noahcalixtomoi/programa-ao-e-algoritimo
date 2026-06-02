/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo:10-moedas.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
* O caixa do supermercado recebe uma certa quantidade de moedas por
*dia. Ler a quantidade de moedas recebidas de acordo com cada um dos
*valores 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Calcular e
*exibir o valor recebido de cada um dos tipos de moeda e a soma total em
*moedas
*/
programa {
	funcao inicio() {
		inteiro m1, m5, m10, m25, m50, m1real
		real v1, v5, v10, v25, v50, v1real, total

		escreva("Qtd moedas 1 centavo: ") leia(m1)
		escreva("Qtd moedas 5 centavos: ") leia(m5)
		escreva("Qtd moedas 10 centavos: ") leia(m10)
		escreva("Qtd moedas 25 centavos: ") leia(m25)
		escreva("Qtd moedas 50 centavos: ") leia(m50)
		escreva("Qtd moedas 1 real: ") leia(m1real)

		v1 = m1 * 0.01
		v5 = m5 * 0.05
		v10 = m10 * 0.10
		v25 = m25 * 0.25
		v50 = m50 * 0.50
		v1real = m1real * 1.0
		total = v1 + v5 + v10 + v25 + v50 + v1real

		escreva("\n--- Resumo ---")
		escreva("\n1 centavo: R$ ", v1)
		escreva("\n5 centavos: R$ ", v5)
		escreva("\n10 centavos: R$ ", v10)
		escreva("\n25 centavos: R$ ", v25)
		escreva("\n50 centavos: R$ ", v50)
		escreva("\n1 real: R$ ", v1real)
		escreva("\nTOTAL EM MOEDAS: R$ ", total)
	}
}
