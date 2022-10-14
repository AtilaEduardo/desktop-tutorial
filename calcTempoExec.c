#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void calcularFatorial(double *fatorial, double *numero);

void calcularFatorial(double *fatorial, double *numero){
	
	for(*fatorial = 1; *numero > 1; *numero = *numero - 5){
		*fatorial = *fatorial * *numero;
		printf("%f\t", *fatorial);
	}
	
	printf("Fatorial: %f", *fatorial);
}

void main(void){
	double fatorial, numero;
	double tempoExecucao = 0.0;
	
	fatorial = 0.0;
	numero = 0.0;
	
	numero = 25.0;
	
	clock_t begin = clock();
	calcularFatorial(&fatorial, &numero);
	clock_t end = clock();
	tempoExecucao += (double)((end - begin)) / CLOCKS_PER_SEC;
	printf("\nTempo de Execucao: %f", tempoExecucao);
	
}
