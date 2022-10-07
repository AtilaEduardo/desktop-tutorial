#include<stdio.h>
#include<conio.h>
#include<string.h>

//constantes
#define numAlunos 2
#define numQuestoes 2

//globais
char gabarito[numQuestoes];
int acertoAluno[numAlunos];
char matriz[numAlunos][numQuestoes];


void cadastrarGabarito(){

	char resposta;

	printf("\n======================================");

	for(int m=0; m < numQuestoes; m++){

		printf("\nDigite o gabarito da questao [%d]", m + 1);

		//espaço no buffer
		scanf(" %c", &resposta);

		gabarito[m] = resposta;
	}

	printf("\ngabarito preenchido com sucesso;");

	printf("\n======================================");
}

void resultado(){

	for (int i=0; i < numAlunos; i++){

		int ponto = 0;

		for (int j=0; j < numQuestoes; j++){

				if(gabarito[j] == matriz[i][j]){
					ponto++;
				}
		}

		acertoAluno[i] = ponto;
	}
}

void imprimeResultado(){

	for (int i=0; i < numAlunos; i++){

		printf("\n O aluno [%d] ficou com [%d] pontos", i+1, acertoAluno[i]);
	}
}


void cadastroAlunos(){

	printf("\n======================================");
	printf("\nCADASTRO NOTAS ALUNOS");
	printf("\n======================================");

	char resposta;

	for (int i=0; i < numAlunos; i++){

		printf("\nDigite a seguir as questoes do aluno id[%d]", i+1);

		for (int j=0; j < numQuestoes; j++){

	    		printf("\nQuestao numero: [%d]", j+1);

				scanf(" %c", &resposta);
				matriz[i][j] = resposta;
		}
	}
	printf("======================================");
}


main(){
	cadastrarGabarito();
	cadastroAlunos();
	resultado();
	imprimeResultado();
}
