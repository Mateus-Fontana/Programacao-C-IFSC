#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int mat;
	char nome[20];
	int nasc;


}Alunos;

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	Alunos *aluno;
	int qtd;
	printf("Quantos alunos voce deseja salvar?\n");
	scanf("%d", &qtd);
	aluno = (Alunos*)malloc(qtd * sizeof(Alunos));
	if(aluno==NULL){
		perror("main: ");
		exit(-1);
	}
	for(int i=0; i<qtd; i++){
	printf("Entre com as informações do [%d] aluno: ", i);
	printf("Nome: ");
	scanf("%s", aluno[i].nome);
	printf("Matricula: ");
	scanf("%d", &aluno[i].mat);
	printf("Nascimento: ");
	scanf("%d", &aluno[i].nasc);

	}
	printf("Alunos salvos: \n");
	printf("nome\t matricula \t nascimento\n");
	for(int i=0; i<qtd; i++){
		printf("%s \t %d \t %d \n", aluno[i].nome,aluno[i].mat, aluno[i].nasc);
	}


	free(aluno);

	return 0;

}
