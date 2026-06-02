/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 8-salario-comissao.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: 
*O vendedor recebe seu salário fixo acrescido de comissões de vendas,
*calculada a partir do percentual do valor de suas vendas. Ler o salário
*fixo do vendedor, o valor de suas vendas e o percentual sobre as vendas.
*Calcular e exibir o salário final do vendedor.
*/
programa {
	funcao inicio() {
		real salario_fixo, valor_vendas, perc_comissao, salario_final
		escreva("Salário fixo: ")
		leia(salario_fixo)
		escreva("Valor total das vendas: ")
		leia(valor_vendas)
		escreva("Percentual de comissão (%): ")
		leia(perc_comissao)
		salario_final = salario_fixo + (valor_vendas * (perc_comissao / 100))
		escreva("O salário final é: R$ ", salario_final)
	}
}
