void quicksortnumerosinteiros(int *numeros, int inicio, int fim){
	int indice_cursor_do_inicio, indice_cursor_do_fim;
	int numero_do_meio, aux;
	indice_cursor_do_inicio = inicio;  indice_cursor_do_fim = fim;
	numero_do_meio = numeros[ (inicio + fim)/2 ];
	do{ 
		while( numeros[indice_cursor_do_inicio] < numero_do_meio && indice_cursor_do_inicio < fim) indice_cursor_do_inicio++;
		while( numero_do_meio < numeros[indice_cursor_do_fim] && indice_cursor_do_fim > inicio) indice_cursor_do_fim--;
		if(indice_cursor_do_inicio <= indice_cursor_do_fim){
			aux = numeros[indice_cursor_do_inicio];
			numeros[indice_cursor_do_inicio] = numeros[indice_cursor_do_fim];
			numeros[indice_cursor_do_fim] = aux;
			indice_cursor_do_inicio++; indice_cursor_do_fim++;
        }
	}while( indice_cursor_do_inicio <= indice_cursor_do_fim);
	if(inicio < indice_cursor_do_fim)
		quicksortnumerosinteiros(numeros, inicio, indice_cursor_do_fim);
	if(indice_cursor_do_inicio < fim)
		quicksortnumerosinteiros(numeros, indice_cursor_do_inicio, fim);
}