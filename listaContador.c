#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

/*******************************************************************
  *   NOME DO PROGRAMA:  CONTADOR                                  *
  *   DESCRICAO: CONTA A QUANTIDADE DE FUN��ES ATRAVES DE UMA LISTA*
  *   SIMPLES DE UM PROGRAMA .c E CALCULA O TOTAL DELAS            *
  *   DATA: 06/10/2022                                             *
  *   INSTITUI��O: IFBA                                            *
  *   ALUNO(A):                                                    *
  *******************************************************************/

struct leitorApoio{
	char simbolo;
	int valorIncremento;
	struct leitorApoio *proxAux;
};
typedef struct leitorApoio *leitor;

struct leitorApoio *inicioLeitor = NULL, *conteudoLeitor = NULL;

void validaErroArqv();
void lerArquivo(char leitor[50]);
leitor iniciarLista(char leitorAux, int leitorProx);
void criarNo();

leitor iniciarLista(char leitorAux, int leitorProx){
	
	leitor L;
	L = (leitor)malloc(sizeof(struct leitorApoio));
	L->simbolo = leitorAux;
	L->valorIncremento = leitorProx;
	L->proxAux = NULL;
	return L;
	
}

void lerArquivo(char leitor[50]){
	FILE *arq;
	char letra;
	int contador;
	struct leitorApoio *aux1, *aux2;
	
	arq = fopen(leitor,"r+");
	
	if(!arq){
	
		validaErroArqv();
		
	}else{
	
		while(fgets(leitor,sizeof(leitor),arq)!=NULL){
	
			if(contador != 0){
				aux1->proxAux = iniciarLista(letra,0);
				aux1 = aux1->proxAux;
			}else{
				inicioLeitor = 	iniciarLista(letra,0);
				aux2 = inicioLeitor;
				aux1 = aux2;
				conteudoLeitor = inicioLeitor;
				contador++;
			}	 	
		}
	}
	
	fclose(arq);
}

void validaErroArqv(){
	
    printf("************* listaContador.c **************\n");
    printf("*                                          *\n");
    printf("*         ERRO AO LER O CONTEUDO           *\n");
    printf("*             	DO ARQUIVO                 *\n");
    printf("*      	  PROCESSAMENTO  ENCERRADO         *\n");
    printf("*                                          *\n");
    printf("************* listaContador.c **************");
              
	exit(1);
}

void criarNo(){
	struct leitorApoio * auxLeitor;
	
	auxLeitor = inicioLeitor;

	while(auxLeitor->proxAux != NULL){
		auxLeitor = auxLeitor->proxAux;	
	}
	
}

int main(void){
	
	lerArquivo("ZZZZZZZ.c");
	criarNo();
	
	
	return 0;
}
