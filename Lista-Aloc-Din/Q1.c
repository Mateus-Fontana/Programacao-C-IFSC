#include <stdio.h>
#include <stdlib.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int *p, n=5;

	p = (int*)malloc(n * sizeof(int));

	if(p == NULL){
		perror("main: ");
		exit(-1);
	}
	printf("Entre com os valores do vetor: \n");
	for(int i=0; i<n; i++){
		printf("V[%d] = ", i);
		scanf("%d", &p[i]);
	}
	printf("\nVetor digitado: \n");
	for(int i=0; i<n; i++){
		printf("V[%d] = %d\n", i, *(p + i));

	}
	free(p);


	return 0;
}
