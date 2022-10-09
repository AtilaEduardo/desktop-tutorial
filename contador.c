#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

/*****************************************************************
  * NOME DO PROGRAMA:  CONTADOR                                  *
  * DESCRICAO: CONTA A QUANTIDADE DE FUNÇÕES SIMPLES E           *
  * NÃO SIMPLES DE UM PROGRAMA .c E CALCULA O TOTAL DELAS        *
  * DATA: 06/10/2022                                             *
  * INSTITUIÇÃO: IFBA                                            *
  * ALUNO(A):                                                    *
  ****************************************************************/

void validarSimples();
void validarNsimples();
void calculaSimples(char *leitor, char *simbolo, int *valorIncremento);
void calculaNsimples(char *leitor, char *simbolo, int *valorIncremento);
void validaErroArqv();

void validarSimples(){
	
	char leitor[1024];
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,total;
	
	a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0;
	n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
	total = 0;
		
	FILE  *arqv;
	arqv = fopen("agoravai.c","r+");
	
	if(!arqv){
	   validaErroArqv();	
	}
	
	while(fgets(leitor,sizeof(leitor),arqv)!=NULL){
				
		calculaSimples(leitor," + ",&a);
		calculaSimples(leitor," - ",&b);
		calculaSimples(leitor," * ",&c);
		calculaSimples(leitor," / ",&d);
		calculaSimples(leitor," // ",&e);
		calculaSimples(leitor," /* ",&f);
		calculaSimples(leitor," */ ",&g);
		calculaSimples(leitor," = ",&h);
		calculaSimples(leitor," == ",&i);
		calculaSimples(leitor," != ",&j);
		calculaSimples(leitor," -= ",&k);
		calculaSimples(leitor," += ",&l);		
		calculaSimples(leitor,"if(",&m);
		calculaSimples(leitor,"else",&n);
		calculaSimples(leitor,"while(",&o);
		calculaSimples(leitor,"printf(",&p);
		calculaSimples(leitor,"scanf(",&q);		
		calculaSimples(leitor,"int ",&r);
		calculaSimples(leitor,"float ",&s);
		calculaSimples(leitor,"double ",&t);
		calculaSimples(leitor,"long ",&u);
		calculaSimples(leitor," >= ",&v);
		calculaSimples(leitor," =< ",&w);
		calculaSimples(leitor,"char ",&x);
		calculaSimples(leitor,"%",&y);
		calculaSimples(leitor,"&",&z);		
	}
	
	printf(" Contador  +: %d\n",a);
	printf(" Contador  -: %d\n",b);
	printf(" Contador  *: %d\n",c);
	printf(" Contador  /: %d\n",d);
	printf(" Contador //: %d\n",e);
	printf(" Contador /*: %d\n",f);
	printf(" Contador */: %d\n",g);
	printf(" Contador  =: %d\n",h);
	printf(" Contador ==: %d\n",i);
	printf(" Contador !=: %d\n",j);	
	printf(" Contador -=: %d\n",k);
	printf(" Contador +=: %d\n",l);
	printf(" Contador if: %d\n",m);
	printf(" Contador else: %d\n",n);
	printf(" Contador while: %d\n",o);
	printf(" Contador printf: %d\n",p);
	printf(" Contador scanf: %d\n",q);
	printf(" Contador int: %d\n",r);
	printf(" Contador float: %d\n",s);
	printf(" Contador double: %d\n",t);
	printf(" Contador long: %d\n",u);
	printf(" Contador >=: %d\n",v);
	printf(" Contador =<: %d\n",w);
	printf(" Contador char: %d\n",x);
	printf(" Contador porcentagem: %d\n",y);
	printf(" Contador &: %d\n",z);
	
	total = a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s + t + u + v + w + x + y + z;
	
	printf("Total de funções simples utilizadas: %d", total);
	
	fclose(arqv);
}

void validarNsimples(){
	FILE  *arqv;
	arqv = fopen("zzzzzz.c","r+");
	
	char leitor[1024];
	int a2,b2,c2,d2,e2,f2,g2,total2;
	
	a2 = 0; 
	
	if(!arqv){
	   validaErroArqv();       
	}
	
	while(fgets(leitor,sizeof(leitor),arqv)!=NULL){
		
		calculaNsimples(leitor,"for(",&a2);
		calculaNsimples(leitor,"for(",&a2);
		calculaNsimples(leitor,"do{",&b2);
		calculaNsimples(leitor,"}while(",&c2);
		calculaNsimples(leitor,"struct ",&d2);
		calculaNsimples(leitor,"typedef ",&e2);
		calculaNsimples(leitor,"switch ",&f2);
		calculaNsimples(leitor,"memset ",&g2);
	}
	
	printf(" Contador for(): %d\n", a2);
	printf(" Contador do{: %d\n", b2);
	printf(" Contador }while(): %d\n", c2);
	printf(" Contador struct: %d\n", d2);
	printf(" Contador typedef: %d\n", e2);
	printf(" Contador switch: %d\n", f2);
	printf(" Contador memset: %d\n", g2);
	
	total2 = a2 + b2 + c2 + d2 + e2 + f2 + g2;
	
	printf("Total de funções compostas utilizadas: %d", total2);
	
	fclose(arqv);
}

void calculaSimples(char *leitor, char *simbolo, int *valorIncremento){

	if(strstr(leitor,simbolo) != '\0'){
		*valorIncremento = *valorIncremento +1;
	}
		
}

void calculaNsimples(char *leitor, char *simbolo, int *valorIncremento){

	if(strstr(leitor,simbolo) != '\0'){
		*valorIncremento = *valorIncremento +2;
	}
		
}

void validaErroArqv(){
	
	printf("************* contador.c **************\n");
    printf("*                                     *\n");
    printf("*       ERRO AO ABRIR ARQUIVO         *\n");
    printf("*                                     *\n");
    printf("*      PROCESSAMENTO  ENCERRADO       *\n");
    printf("*                                     *\n");
    printf("************* contador.c **************");
              
	exit(1);
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nChamada do contador simples\n");
		validarSimples();
    
    printf("\n\nFim da execução contador simples!\n");
    
	printf("\n\n======================Divisão de Contadores======================\n\n");
	
	printf("\nChamada do contador composto\n\n");
		validarNsimples();
		
	printf("\n\nFim da execução contador não simples!\n");

return 0;	
}
