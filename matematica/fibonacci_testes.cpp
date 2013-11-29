#include <stdio.h>
#include ".\fibonacci.cpp"

int main(void){
	int quant_numeros;
	printf("quantos numeros terah nessa serie fibonacci? ");
	scanf("%d", &quant_numeros);
	int *serie_fibonacci = obter_serie_fibonacci(quant_numeros);
	printf("Serie fibonacci \n");
	for(int i = 0; i < quant_numeros; i++){
		printf("%d \n", serie_fibonacci[i]);
	}
}