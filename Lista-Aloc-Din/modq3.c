#include <stdio.h>
#include <stdlib.h>
#include "modq3.h"

char *AnulaVogais(char *string, int tam, int *qtdC){
	setvbuf(stdout, NULL, _IONBF, 0);
	int cont=0, j=0;
	char *pv;
	for(int i=0; i<tam; i++){
		if((*(string + i)!= 'a') && (*(string + i)!= 'A') &&  (*(string + i)!= 'e') && (*(string + i)!= 'E') && (*(string + i)!= 'i') && (*(string + i)!= 'I') && (*(string + i)!= 'o') && (*(string + i)!= 'O') && (*(string + i)!= 'u') && (*(string + i)!= 'U') ){
			cont++;
		}
	}
	pv = (char*)malloc(cont*sizeof(char));

	for(int i=0; i<tam; i++){
		if((*(string + i)!= 'a') && (*(string + i)!= 'A') &&  (*(string + i)!= 'e') && (*(string + i)!= 'E') && (*(string + i)!= 'i') && (*(string + i)!= 'I') && (*(string + i)!= 'o') && (*(string + i)!= 'O') && (*(string + i)!= 'u') && (*(string + i)!= 'U') ){
			pv[j] = *(string + i);
			j++;
			*qtdC = *qtdC +1;
		}

	}
	return pv;


}
