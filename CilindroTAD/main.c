#include <stdio.h>
#include <stdlib.h>
#include "mod.h"

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	float volume=0, altura = 10.0, raio = 3.0, h=0;
	Cilindro *novo;
	novo = cilindro_cria(raio, altura);

	volume = cilindro_volume(novo);

	printf("O volume do cilindro é %.2f\n", volume);
	h = cilindro_acessa_altura(novo);
	printf("A altura do cilindro é %.2f\n", h);
	cilindro_libera(novo);


	return 0;
}
