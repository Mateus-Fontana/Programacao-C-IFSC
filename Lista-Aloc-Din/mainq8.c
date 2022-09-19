#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "modq8.h"

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int **mat, col, linha, r, valor;
	printf("Defina o tamanho da matriz MxN");
	printf("\nM= ");
	scanf("%d", &col);
	mat = (int**)malloc(col * sizeof(int*));
	if(mat == NULL){
		perror("main: ");
		exit(-1);
	}
	printf("N= ");
	scanf("%d", &linha);
	for(int i=0; i<col; i++){
		mat[i] = (int*)malloc(linha * sizeof(int));
		if(mat[i] == NULL){
			perror("main: ");
			exit(-1);
		}
	}
	srand(time(NULL));
	for(int i=0; i<col; i++){
		for(int j=0; j<linha; j++){
			mat[i][j] = (rand() % 100);
		}
	}
	for(int i=0; i<col; i++){
		for(int j=0; j<linha; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("Digite o valor :");
	scanf("%d", &valor);

	r = VarreMat(mat, col, linha, valor);
	printf("\nRetorno da funcão = %d", r);



	return 0;
}
