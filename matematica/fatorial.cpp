int calcularfatorial(int numero){
	int resposta;
	if(numero == 1) return 1;
	resposta = calcularfatorial(numero - 1) * numero; /* recursao */
	return resposta;
}

int calcularfatorialsemrecursao(int numero){
	int fator, resposta;
	resposta = 1;
	for(fator = 1; fator <= numero; fator++) resposta *= fator;
	return resposta;
}