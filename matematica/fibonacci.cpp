#include <stdlib.h>

int *obter_serie_fibonacci(int quant_numeros){
	int *serie_fibonacci = (int *)malloc(sizeof(int) * quant_numeros);
	for(int i = 0; i < quant_numeros; i++){
		if(i <= 1){  //se for a primeira ou segunda posicao
			serie_fibonacci[i] = i + 1;
		}
		else{
			serie_fibonacci[i] = serie_fibonacci[i-1] + serie_fibonacci[i-2];
		}
	}
	return serie_fibonacci;
}