#include <stdio.h>
#include <stdlib.h>
#include "mod.h"
/*Fun��o fatorial
 *
 * dado = 3
 *
 * Empilhar
 *
 * --------PILHA--------
 * |---1----|
 * |---2----|
 * |---3----|
 * |--NULL--|
 * ----FIM PILHA--------
 * fatorial de 1 = 1;
 *
 * Desempilhar
 *
 * |---2----|
 * |---3----|
 * |--NULL--|
 * 1 * 1 = 1
 *
 *
 * |---3----|
 * |--NULL--|
 * 1 * 2 = 2
 *
 * Desempilhar
 *
 *
 * |--NULL--|
 * 2 * 3 = 6
 *
 * � NULL? SIM
 * ent�o para;
 */
struct no{
	int dado;
	struct no *proximo;
};

No* empilhar(No *topo, int num){
	No *novo;
	novo = (No*)malloc(sizeof(No));
	if(novo){
		novo->dado = num;
		novo->proximo = topo;
	}
	else{
		exit(-1);
		//printf("\nErrso ao alocar mem�ria!\n");
	}
	return novo;
}

No* desempilhar(No **topo){
	No *remover=NULL;

	if(topo){
		remover = *topo;
		*topo = remover->proximo;
	}
	return remover;
}

float fatorial(int num){
	No *p=NULL, *remover;
	float fat=0;

	while(num>1){
		p = empilhar(p, num);
		num--;
	}
	while(p){

		remover = desempilhar(&p);
		num = num * remover->dado;
		free(remover);

	}
	fat=num;


	return fat;
	}




