#include <stdio.h>
#include <stdlib.h>
#include "modq4.h"

int *TenValues(int *vetor){
	int *rp, j=0;
	rp = (int*)calloc(20, sizeof(int));
	if(rp == NULL){
		perror("Modulo 1: ");
		exit(-2);
	}
	for(int i=0; i<1500; i++){
		if((i<10) | (i>1489)){
			*(rp + j) = *(vetor + i);
			j++;
		}

	}
	return rp;
}
