#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "modq4.h"


int main(){
	int qtd = 1500, *p, *rp;

	p = (int*)calloc(qtd, sizeof(int));
	if(p){
		srand(time(NULL));
		printf("1500 numeros gerados aleatoriamente: \n");
		for(int i=0; i<qtd; i++){
			*(p + i) = rand()%100;
			printf("V[%d] = %d\n",i, *(p + i));
		}
		rp = TenValues(p);
		printf("Primeiros e ultimos 10 numeros digitados são: \n");
		for(int i=0; i<20; i++){
			printf("%d\n", *(rp + i));
		}


	}
	else{
		perror("main: ");
		exit(-1);
	}


	free(p);
	free(rp);

	return 0;



}
