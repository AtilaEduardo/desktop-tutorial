#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

/*    ******************************************************************
      *   NOME DO PROGRAMA:  CONTADOR                                  *
      *   DESCRICAO: CONTA A QUANTIDADE DE FUNÇÕES SIMPLES E           *
  	  *	  NÃO SIMPLES DE UM PROGRAMA .c E CALCULA O TOTAL DELAS        *
      *   DATA: 06/10/2022                                             *
      *   INSTITUIÇÃO: IFBA                                            *
      *   ALUNO(A):                                                    *
      ****************************************************************** */

void contadorSimples();
void contadorNsimples();
void validaErroArqv();

void contadorSimples(){
	
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
		
		if(strstr(leitor," + ") != '\0'){
			a++;
		}
		
		if(strstr(leitor," - ") != '\0'){
			b++;
		}
		
		if(strstr(leitor," * ") != '\0'){
			c++;
		}
		
		if(strstr(leitor," / ") != '\0'){
			d++;
		}
		
		if(strstr(leitor," // ") != '\0'){
			e++;
		}
		
		if(strstr(leitor," /* ") != '\0'){
			f++;
		}
		
		if(strstr(leitor," */ ") != '\0'){
			g++;
		}
		
		if(strstr(leitor," = ") != '\0'){
			h++;
		}
		
		if(strstr(leitor," == ") != '\0'){
			i++;
		}
		
		if(strstr(leitor," != ") != '\0'){
			j++;
		}
		
		if(strstr(leitor," -= ") != '\0'){
			k++;
		}
		
		if(strstr(leitor," += ") != '\0'){
			l++;
		}
		
		if(strstr(leitor,"if(") != '\0'){
			m++;
		}
		
		if(strstr(leitor,"else(") != '\0'){
			n++;
		}
		
		if(strstr(leitor,"wilhe(") != '\0'){
			o++;
		}
		
		if(strstr(leitor,"printf(") != '\0'){
			p++;
		}
		
		if(strstr(leitor,"scanf(") != '\0'){
			q++;
		}
		
		if(strstr(leitor,"int ") != '\0'){
			r++;
		}
		
		if(strstr(leitor,"float ") != '\0'){
			s++;
		}
		
		if(strstr(leitor,"double ") != '\0'){
			t++;
		}
		
		if(strstr(leitor,"long ") != '\0'){
			u++;
		}
		
		if(strstr(leitor," >= ") != '\0'){
			v++;
		}
		
		if(strstr(leitor," =< ") != '\0'){
			w++;
		}
		
		if(strstr(leitor," char ") != '\0'){
			x++;
		}
		
		if(strstr(leitor,"%") != '\0'){
			y++;
		}
		
		if(strstr(leitor,"&") != '\0'){
			z++;
		}
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

void contadorNsimples(){
	FILE  *arqv;
	arqv = fopen("zzzzzz.c","r+");
	
	char leitor[1024];
	int a2,b2,c2,d2,e2,f2,g2,total2;
	
	a2 = 0; 
	
	if(!arqv){
	   validaErroArqv();       
	}
	
	while(fgets(leitor,sizeof(leitor),arqv)!=NULL){
		
		if(strstr(leitor,"for(") != '\0'){
			a2 = a2 + 2;
		}
		
		if(strstr(leitor,"do{") != '\0'){
			b2 = b2 + 2;
		}
		
		if(strstr(leitor,"}while(") != '\0'){
			c2 = c2 + 2;
		}
		
		if(strstr(leitor,"struct ") != '\0'){
			d2 = d2 + 2;
		}
		
		if(strstr(leitor,"typedef ") != '\0'){
			e2 = e2 + 2;
		}
		
		if(strstr(leitor,"switch ") != '\0'){
			f2 = f2 + 2;
		}
		
		if(strstr(leitor,"memset ") != '\0'){
			g2 = g2 + 2;
		}
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
		contadorSimples();
    
    printf("\n\nFim da execução contador simples!\n");
    
	printf("\n\n======================Divisão de Contadores======================\n\n");
	
	printf("\nChamada do contador composto\n\n");
		contadorNsimples();
		
	printf("\n\nFim da execução contador composto!\n");

return 0;	
}
