/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * Arquivo: 5-abastecimento.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Calcular quantos litros de combustível um motorista consegue 
 * abastecer com um determinado valor em reais.
 */
programa {
	funcao inicio() {
		real precoLitro, valorReais, totalLitros

		escreva("Preço do litro do combustível: R$ ")
		leia(precoLitro)
		escreva("Valor que deseja abastecer: R$ ")
		leia(valorReais)

		totalLitros = valorReais / precoLitro

		escreva("\nPreço por litro: R$ ", precoLitro)
		escreva("\nValor pago: R$ ", valorReais)
		escreva("\nQuantidade de litros abastecidos: ", totalLitros)
	}
}
