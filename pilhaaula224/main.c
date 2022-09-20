#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

typedef struct{
	char nome[50];
	Data data;

}Pessoa;

typedef struct no{
	Pessoa p;
	struct no *proximo;

}No;

Pessoa ler_pessoa(){
	setvbuf(stdout, NULL, _IONBF, 0);
	Pessoa p;
	printf("\n Digite nome:");
	fflush(stdout);
	fflush(stdin);
	scanf("%49[^\n]",p.nome);
	printf("\n Digite data de nascimento dd mm aa");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d %d",&p.data.dia,&p.data.mes,&p.data.ano);

	return p;
}

void imprimir_pessoa(Pessoa p){
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Nome: %s\nNascimento: %d/%d/%d\n\n",p.nome,p.data.dia,p.data.mes,p.data.ano);

}


No* empilhar(No *topo){
	setvbuf(stdout, NULL, _IONBF, 0);
	No *novo = malloc(sizeof(No));
	if(novo){
		novo->p = ler_pessoa();
		novo->proximo = topo;
		return novo;
	}
	else
		printf("Erro ao alocar memoria!!");
	return NULL;

}

No* desempilhar(No **topo){
	setvbuf(stdout, NULL, _IONBF, 0);
	No *remover=NULL;
	if(*topo){
		remover = *topo;
		*topo = remover->proximo;
	}
	else
		printf("Pilha Vazia\n");
	return remover;
}

void imprimir_pilha(No *topo){
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("\n--------------PILHA-----------------\n");
	while(topo){
		imprimir_pessoa(topo->p);
		topo = topo->proximo;
	}
	printf("\n--------------PILHA-----------------\n");
}

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	No *remover, *topo = NULL;
	int opcao;
	do{
		printf("\nEscolha uma opção:\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
		scanf("%d",&opcao);
		switch(opcao){
		case 1:
			setvbuf(stdout, NULL, _IONBF, 0);
			topo = empilhar(topo);
			break;
		case 2:
			remover = desempilhar(&topo);
			if(remover){
				printf("\nElemento removido com sucesso!\n");
				imprimir_pessoa(remover->p);

			}
			else
				printf("\nSem nó a remover!\n");

			break;
		case 3:
			imprimir_pilha(topo);
			break;
		default:
			if(opcao!=0)
				printf("\nOpção inválida!\n");
		}
	}while(opcao!=0);


	return 0;
}
