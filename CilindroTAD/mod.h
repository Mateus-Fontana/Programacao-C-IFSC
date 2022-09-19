#ifndef MOD_H_INCLUDED
#define MOD_H_INCLUDED

typedef struct cilindro Cilindro;

Cilindro* cilindro_cria(float raio, float altura);

void cilindro_libera(Cilindro *novo);

float cilindro_acessa_raio(Cilindro *novo);

float cilindro_acessa_altura(Cilindro *novo);

void cilindro_atribui(Cilindro *novo, float raio, float altura);

float cilindro_volume(Cilindro *novo);

#endif
