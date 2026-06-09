/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * * Arquivo: 3-calculo-desconto.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler o valor de uma compra e calcular o desconto de acordo com 
 * as faixas de preço (sem desconto, 10% ou 20%).
 */
programa {
	funcao inicio() {
		real valorCompra, desconto, valorFinal

		escreva("Digite o valor da compra: R$ ")
		leia(valorCompra)

		se (valorCompra < 100) {
			desconto = 0.0
		} senao se (valorCompra <= 500) {
			desconto = valorCompra * 0.10 
		} senao {
			desconto = valorCompra * 0.20 
		}

		valorFinal = valorCompra - desconto
		escreva("Valor original: R$ ", valorCompra, "\n")
		escreva("Desconto: R$ ", desconto, "\n")
		escreva("Valor a pagar: R$ ", valorFinal)
	}
}
