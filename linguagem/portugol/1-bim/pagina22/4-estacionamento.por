/*
 * Instituição: EtecVAV - Vasco Antonio Venchiarutti
 * * Arquivo: 4-calculo-estacionamento.por
 * Data: 20/05/2026
 * Autor: Miguel Silva Sacheto e Noah Calixto Moi
 * Descrição:
 * Calcular o valor a pagar num estacionamento: R$ 2,00 por hora até 
 * 2 horas, e R$ 1,00 por hora adicional após esse período.
 */
programa {
	funcao inicio() {
		inteiro horas
		real total

		escreva("Tempo de permanência (horas): ")
		leia(horas)

		se (horas <= 2) {
			total = horas * 2.00
		} senao {
			total = (2 * 2.00) + ((horas - 2) * 1.00)
		}

		escreva("O valor total a pagar é: R$ ", total)
	}
}
