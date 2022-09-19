#include <stdio.h>
#include <stdlib.h>
#include "mod.h"
int main(){
	float area = 0, volume =0, raio = 5.0, r= 0;
	Esfera *novo;
	novo = cria_esfera(raio);
	area = area_esfera(novo);
	printf("Área da esfera é %.2f\n", area);
	r = acessa_raio(novo);
	volume = volume_esfera(novo);
	printf("O volume da esfera é %.2f\n", volume);
	printf("Raio da esfera é %.2f\n", r);
	libera_esfera(novo);
	return 0;
}
