#include <stdio.h>
#include <stdlib.h>
#include "../include/aluno.h"
#include "../include/view.h"

int main(){
    char str[500];
    printf("adicionarAluno: %d;\n",
    adicionarAluno(2020001, "Jose Joceno Santos", 
                123456, 5, 9.5f, 8.0f, 8.5f, 9.5f));
    
    printf("adicionarAluno: %d;\n",
    adicionarAluno(2020002, "Maria Geovana Nunes", 
                123456, 15, 9.0f, 8.0f, 10.0f, 8.5f));
    printf("adicionarAluno: %d;\n",
    adicionarAluno(2020005, "Jones Nunes", 
                123456, 10, 7.5f, 8.0f, 6.5f, 9.5f));

    printf("Quantidade: %d;\n", getQuantidadeAlunosCadastrados());

    getAlunos(str);

    printf("\naaaa\n");
	return (0);
}