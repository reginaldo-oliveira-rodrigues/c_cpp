#include <stdio.h>
#include ".\fatorial.cpp"

int main(void){
	int numero = 31;
	int fatorial = calcularfatorial(numero);
	printf("fatorial, por recursao, de %d eh %d\n", numero, fatorial);
	numero = 33;
	fatorial = calcularfatorialsemrecursao(numero);
	printf("fatorial, sem recursao, de %d eh %d\n", numero, fatorial);
}