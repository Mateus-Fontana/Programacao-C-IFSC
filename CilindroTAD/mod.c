#include <stdio.h>
#include <stdlib.h>
#include "mod.h"

#define PI 3.14159265358979323846;

struct cilindro{
	float raio;
	float altura;
};

Cilindro* cilindro_cria(float raio, float altura){
	Cilindro *novo;
	novo = (Cilindro*)malloc(sizeof(Cilindro));
	if(novo){
		novo->altura = altura;
		novo->raio = raio;

	}
	else{
		printf("Erro ao alocar memória!\n");
		return NULL;
	}
	return novo;
}

void cilindro_libera(Cilindro *novo){
	free(novo);
}

float cilindro_acessa_raio(Cilindro *novo){
	return novo->raio;
}

float cilindro_acessa_altura(Cilindro *novo){
	return novo->altura;
}

void cilindro_atribui(Cilindro *novo, float raio, float altura){
	novo->altura = altura;
	novo->raio = raio;
}

float cilindro_volume(Cilindro *novo){
	float volume = 0;
	volume = novo->raio * novo->raio * novo->altura * PI;
	return volume;
}
