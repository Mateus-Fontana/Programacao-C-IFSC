#ifndef MOD_H_INCLUDED
#define MOD_H_INCLUDED

typedef struct esfera Esfera;

Esfera* cria_esfera(float);

void libera_esfera(Esfera*);

float acessa_raio(Esfera*);

float area_esfera(Esfera*);

float volume_esfera(Esfera*);

#endif
