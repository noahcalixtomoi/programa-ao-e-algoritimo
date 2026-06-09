/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * * Arquivo: 5-etanol-ou-gasolina.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Ler os preços do etanol e da gasolina e recomendar o uso de etanol 
 * se o seu custo for de até 70% do preço da gasolina.
 */
programa {
	funcao inicio() {
		real precoEtanol, precoGasolina, limite

		escreva("Preço do Etanol: R$ ")
		leia(precoEtanol)
		escreva("Preço da Gasolina: R$ ")
		leia(precoGasolina)

		limite = precoGasolina * 0.70

		se (precoEtanol <= limite) {
			escreva("Recomendação: Abasteça com ETANOL")
		} senao {
			escreva("Recomendação: Abasteça com GASOLINA")
		}
	}
}
