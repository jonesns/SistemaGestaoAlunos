#include <stdio.h>
#include <stdlib.h>
#include "../include/helloWorld.h"
#include "../include/aluno.h"

int main(){
    pAluno aluno;
    int mat = 2021001;
    char nome[] = "Jose da Silva";
    int turma = 123456;
    float notas[] = {5.0f,6.8f,7.2f,8.9f};
    int faltas = 8;

    aluno = novoAluno(mat, nome, turma, notas, faltas);

    if(aluno != NULL){
        printf("Aluno criado!!!\n\n");
    }

    liberaAluno(&aluno);

    /*if(novoAluno(&aluno) == 0)
    return 0;
    aluno.ptrMetodo(&aluno);
    */
	return (0);
}