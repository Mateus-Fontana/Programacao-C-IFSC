#include <stdio.h>
#include <stdlib.h>
#include "modq2.h"

void LeParImp(int *qtdI, int *qtdP, int *vetor, int qtd){
	setvbuf(stdout, NULL, _IONBF, 0);
	*qtdI = 0;
	*qtdP = 0;
	for(int i=0; i<qtd; i++){
		if(*(vetor + i) % 2 == 1){
			*qtdI = *qtdI +1;
		}
		else
			*qtdP = *qtdP + 1;
	}



}
