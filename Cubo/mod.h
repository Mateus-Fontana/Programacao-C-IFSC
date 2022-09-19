#ifndef MOD_H_INCLUDED
#define MOD_H_INCLUDED

typedef struct cubo Cubo;

//Cria o cubo
Cubo* cubo_cria(float);


//libera memória alocada
void cubo_libera(Cubo*);


//acessa valor do tamanho da aresta
float cubo_acessa(Cubo*);


//Atribui valor para a aresta do cubo
void cubo_atribui(Cubo*, float);


//Retorna area do cubo
float cubo_area(Cubo*);


//Retorna volume do cubo
float cubo_volume(Cubo*);


#endif
