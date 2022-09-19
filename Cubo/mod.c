#include <stdio.h>
#include <stdlib.h>
#include "mod.h"

struct cubo{
	float valor;
};

Cubo* cubo_cria(float TamAresta){
	setvbuf(stdout, NULL, _IONBF, 0);
	Cubo *novo;
	novo =(Cubo*)malloc(sizeof(Cubo));
	if(novo){
		novo->valor = TamAresta;
	}
	else{
		printf("Erro ao alocar memória");
		return NULL;
	}
	return novo;
}

void cubo_libera(Cubo *novo){
	free(novo);
}

float cubo_acessa(Cubo *novo){
	return novo ->valor;
}

void cubo_atribui(Cubo *novo, float TamAresta){
	novo->valor = TamAresta;
}

float cubo_area(Cubo *novo){
	float area=0;

	area = 6 * novo->valor * novo->valor;
	return area;
}

float cubo_volume(Cubo *novo){
	float volume=0;
	volume = novo->valor * novo->valor * novo->valor;
	return volume;
}
