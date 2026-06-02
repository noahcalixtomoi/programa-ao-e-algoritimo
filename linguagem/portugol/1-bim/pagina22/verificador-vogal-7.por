/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
* Arquivo: verificador-vogal-7.por
* Data: 13/03/2026
* Autor: Miguel Silva Sacheto e Noah Calixto Moi
* Descrição: Ler um caractere e verificar se o caractere lido é uma vogal.
*/
programa {
	funcao inicio() {
		caracter letra
		escreva("Digite um caractere: ")
		leia(letra)

		se (letra == 'a' ou letra == 'e' ou letra == 'i' ou letra == 'o' ou letra == 'u' ou
		    letra == 'A' ou letra == 'E' ou letra == 'I' ou letra == 'O' ou letra == 'U') {
			escreva("O caractere '", letra, "' é uma vogal.")
		} senao {
			escreva("O caractere '", letra, "' não é uma vogal.")
		}
	}
}
