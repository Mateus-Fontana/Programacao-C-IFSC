/*	Ainda não está funcionando
 * Revisar o código
 * Preciso declarar struct no modulo e declarar typedef na biblioteca.
 */

#include <stdio.h>
#include <stdlib.h>
#include "modq7.h"

typedef struct{
	int id;
	char nome[50];
	int estoq;
	float valor;
}Produto;

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	Produto *produto, *rf;
	int qtd;
	printf("Qual a quantidade de produtos que deseja cadastrar? ");
	scanf("%d", &qtd);
	produto = (Produto*)malloc(qtd * sizeof(Produto));
	if(produto){

		printf("Entre com as informações dos produtos: \n");
		for(int i=0; i<qtd; i++){
			printf("Produto[%d]: \n", (i + 1));
			printf("Nome: ");
			fflush(stdout);
			fflush(stdin);
			gets(produto[i].nome);
			printf("Código de identificação (ID): ");
			scanf("%d", &produto[i].id);
			printf("Quantidade em estoque: ");
			scanf("%d", &produto[i].estoq);
			printf("Valor do produto: ");
			scanf("%f", &produto[i].valor);
		}
		rf = Maiorpreco(produto,qtd);




	}
	else{
		perror("main: ");
		exit(-1);
	}

	free(produto);


	return 0;
}
