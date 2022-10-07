#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>
//
void funcaoSimples();
void funcaoComposta();
//
void funcaoSimples(){
//
FILE *arquivo;
arquivo = fopen("agoravai.c","r+");
//
if(!arquivo){
	printf("Erro. Nao foi possivel abrir o arquivo!");
//
	getchar();
//	
	exit(1);
}
char busca[1024];
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,total=0;
//
	while(fgets(busca,sizeof(busca),arquivo)!=NULL){
//
	if(strstr(busca,"+") != '\0'){
		a++;
	}
//
	if(strstr(busca,"-") != '\0'){
		b++;
	}
//
	if(strstr(busca,"if") != '\0'){
		c++;
	}
//
	if(strstr(busca," = ") != '\0'){
		d++;
	}
//
	if(strstr(busca," != ") != '\0'){
		e++;	
	}
//
	if(strstr(busca," -= ") != '\0'){
		f++;
	}
//
	if(strstr(busca," += ") != '\0'){
		g++;
	}
//
	if(strstr(busca," == ") != '\0'){
		h++;
	}
//
	if(strstr(busca," / ") != '\0'){
		i++;
	}
//
	if(strstr(busca," * ") != '\0'){
		j++;
	}
}
	printf("contador +: %d\n",a);
//
	printf("contador -: %d\n",b);
//
	printf("contador if: %d\n",c);
//
	printf("contador =: %d\n",d);
//
	printf("contador !=: %d\n",e);
//
	printf("contador -=: %d\n",f);
//
	printf("contador +=: %d\n",g);
//
	printf("contador ==: %d\n",h);
//
	printf("contador /: %d\n",i);
//
	printf("contador *: %d\n",j);
//
	total = a+b+c+d+e+f+g+h+i+j;
//
printf("Total de fun��es simples utilizadas: %d", total);
//
fclose(arquivo);
//
}

void funcaoComposta(){
//
FILE *arquivo;
arquivo = fopen("agoravai.c","r+");
//
if(!arquivo){
	printf("Erro. Nao foi possivel abrir o arquivo!");
	getchar();
	exit(1);
}

char buscar[1024];
int a2=0,b2=0,c2=0,c3=0,d2=0,e2=0,f2=0,total2=0;

while(fgets(buscar,sizeof(buscar),arquivo)){

	if(strstr(buscar," for(") != '\0'){
		a2 = a2 + 2;
	}
	if(strstr(buscar," do{") != '\0'){
		b2 = b2 + 2;
	}
	if(strstr(buscar,"while") != '\0'){
		if(strstr(buscar," }while(") != '\0'){
			c2 = c2 + 2;
		}else if(strstr(buscar," while(") != '\0'){
			c3 = c3 + 2;
		}
	}
	if(strstr(buscar,"switch") != '\0'){
		d2 = d2 + 2;
	}
	if(strstr(buscar,"memset") != '\0'){
		e2 = e2 + 2;
	}
	if (strstr(buscar,"struct{") != '\0'){
		f2 = f2 + 2;
	}
}
//
	printf("contador for: %d\n",a2);
//
	printf("contador do while: %d\n",b2);
//
	printf("contador }while(): %d\n",c2);
//
	printf("contador while(): %d\n",c3);
//
	printf("contador switch: %d\n",d2);
//
	printf("contador memset: %d\n",e2);
//
	printf("contador struct: %d\n",f2);
//
	total2 = a2+b2+c2+c3+d2+e2+f2;

// 
	printf("Total de fun��es compostas utilizadas: %d", total2);
//

fclose(arquivo);

}

int main(void){

setlocale(LC_ALL, "Portuguese");

	printf("Fun��es Sinples\n\n");
		funcaoSimples();

printf("\n\n////////////////////////////////////////////////////\n\n");

	printf("Fun��es Compostas\n\n");
		funcaoComposta();
		
return 0;
}
