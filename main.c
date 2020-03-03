/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Igor
 *
 * Created on 26 de Janeiro de 2020, 23:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int soma (int *pR);
int subtracao (int *pR);
int multiplicacao (int *pR);
int divisao (int *pR);
int menu (int *x);
int operation (int *x);

int main(int argc, char** argv)
{
	int *x,r=0;
	
	printf("Digite o primero numero:");
	scanf("%d",&r);
	x=&r;
	menu(x);

	return(EXIT_SUCCESS);
}

int soma (int *pR){
	int x,soma;
	printf("qual numero deseja somar:");
	scanf("%d",&x);
	
	soma=x+*pR;
	
	pR=&soma;
	
	operation(pR);
	
	return *pR;
}
int subtracao (int *pR){
	int x,sub;
	printf("qual numero deseja subtrair:");
	scanf("%d",&x);
	
	sub=*pR-x;
	
	pR=&sub;
	
	operation(pR);
	
	return *pR;
}
int multiplicacao (int *pR){
	int x,mult;
	printf("qual numero deseja multiplicar:");
	scanf("%d",&x);
	
	mult=x*(*pR);
	
	pR=&mult;
	
	operation(pR);
	
	return *pR;
}
int divisao (int *pR){
	int x,div;
	printf("por qual numero deseja dividir:");
	scanf("%d",&x);
	
	div=(*pR)/x;
	
	pR=&div;
	
	operation(pR);
	
	return *pR;
}
int menu (int *x){
	int menu;
	printf("Escolha sua operação:\n"
			"\t1-Soma\n"
			"\t2-Subtração\n"
			"\t3-Multiplicação\n"
			"\t4-Divisão\n");
		scanf("%d",&menu);
		
	switch(menu){
		case 1: 
			soma(x);
			break;
		case 2: 
			subtracao(x);
			break;
		case 3: 
			multiplicacao(x);
			break;
		case 4:
			divisao(x);
			break;
		default:
			printf("encerrando calculadora");
			return 0;
	}
}

int operation (int *x){
	printf("Resposta: %d\n",*x);
	int op=0;
	printf ("Deseja fazer mais alguma operação:\n"
		"\t1-Sim\n"
		"\t2-Não\n");
	scanf("%d",&op);
	if(op==1){
		menu(x);
	}else
		printf("Calculadora encerrada!");
		return 0;
}