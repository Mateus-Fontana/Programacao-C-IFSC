#include <stdio.h>
#include <stdlib.h>
#include "mod.h"

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	float area, volume, aresta;
	int i=1;
	Cubo *novo;
	novo = cubo_cria(3.0);

	area = cubo_area(novo);
	printf("A area do cubo é %2.f\n", area);
	volume = cubo_volume(novo);
	printf("O volume do cubo é %2.f\n", volume);
	do{
		printf("Defina o novo tamanho da aresta do cubo:\n");
		scanf("%f", &aresta);
		cubo_atribui(novo,aresta);
		area = cubo_area(novo);
		printf("A area do cubo é %.2f\n", area);
		volume = cubo_volume(novo);
		printf("O volume do cubo é %.2f\n", volume);
		printf("Se desejar encerrar o loop entre com '0': ");
		scanf("%d", &i);

	}while(i!=0);

	cubo_libera(novo);

	return 0;
}
