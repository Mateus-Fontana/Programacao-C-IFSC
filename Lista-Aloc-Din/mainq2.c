#include <stdio.h>
#include <stdlib.h>
#include "modq2.h"


int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int *p, qtd, qtdP, qtdI;
	printf("Entre com o tamanho do vetor: \n");
	scanf("%d", &qtd);

	p = (int*)malloc(qtd * sizeof(int));

	if(p){
		printf("Entre com os valores do vetor: \n");
		for(int i=0; i<qtd; i++){
			printf("V[%d] = ", i);
			scanf("%d", &p[i]);
		}
		LeParImp(&qtdP, &qtdI, p, qtd);
		printf("Vetor digitado: \n");
		for(int i=0; i<qtd; i++){
			printf("V[%d] = %d \n", i, *(p + i));
		}
		printf("Numeros pares digitados: %d\n", qtdP);
		printf("Numero impares digitados: %d \n",qtdI);



	}
	else{
		perror("main: ");
		exit(-1);
	}
	free(p);

	return 0;
}
