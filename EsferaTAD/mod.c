#include <stdio.h>
#include <stdlib.h>
#include "mod.h"
#define PI 3.14159265358979323846
struct esfera{
	float raio;
};
//typedef struct esfera Esfera

Esfera* cria_esfera(float raio){
	setvbuf(stdout, NULL, _IONBF, 0);
	Esfera *novo;
	novo = (Esfera*)malloc(sizeof(Esfera));
	if(novo){
		novo->raio = raio;
	}
	else{
		printf("Erro ao alocar memória!");
		return NULL;
	}
	return novo;
}

void libera_esfera(Esfera *novo){
	free(novo);
}

float acessa_raio(Esfera *novo){
	return novo->raio;
}

float area_esfera(Esfera *novo){
	float area =0;
	area = novo->raio * novo->raio * 4 * PI;
	return area;
}

float volume_esfera(Esfera *novo){
	float volume = 0;
	volume = (novo->raio * novo->raio * novo->raio * 4 * PI)/3;
	return volume;
}
