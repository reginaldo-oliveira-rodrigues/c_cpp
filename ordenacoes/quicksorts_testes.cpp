#include <stdio.h>
#include ".\quicksorts.cpp"

int main(void){ 
	int numeros[8] = {7, 3, 1, 45, 4, 23, 6, 2};
	quicksortnumerosinteiros( numeros, 0, 7);
	printf("O conjunto de numeros ordenado eh: ");
	for(int i = 0; i < 8; i++)		printf("%d ", numeros[i]);
	return 0;
}