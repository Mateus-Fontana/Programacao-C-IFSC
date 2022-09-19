#include <stdio.h>
#include <stdlib.h>
#include "modq3.h"


int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	char *p, *pv;
	int tam, qtdC=0;
	printf("Defina o tamanho da string: ");
	scanf("%d", &tam);

	p = (char*)malloc(tam * sizeof(char));
	if(p){
		fflush(stdout);
		fflush(stdin);
		printf("Entre com a frase desejada: \n");
		gets(p);
		pv = AnulaVogais(p,tam, &qtdC);
		printf("Frase sem as vogais: \n%s", pv);


	}


	else{
		perror("main: ");
		exit(-1);
	}
	free(pv);

	free(p);

}
