#include <stdlib.h>
#include <stdio.h>
#include "../include/view.h"
#include "../include/controller.h"

void texto_menu(void){
    printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",
            "+-------------------------------------------------+",
            "|        Digite o número da opção desejada        |",
            "+-------------------------------------------------+",
            "(1) Cadastrar um aluno",
            "(2) Remover um aluno",
            "(3) Atualizar um aluno",
            "(4) Listar alunos cadastrado",
            "(5) Listar alunos aprovados por Media e Frequencia",
            "(6) Listar alunos reprovados por media",
            "(7) Listar alunos Reprovados por falta",
            "(0) Sair",
            "------------------------------------------------->",
            "Digite o número da opção: ");
}

int menu(){
    int op;
    texto_menu();
    scanf("%d", &op);
    printf("------------------------------------------------->\n");
    switch (op)
    {
    case 0:
        /* code */
        return -1;
    case 1:
        /* code */
        return 1;
    case 2:
        /* code */
        return 2;
    case 3:
        /* code */
        return 3;
    case 4:
        /* code */
        return 4;
    case 5:
        /* code */
        return 5;
    case 6:
        /* code */
        return 6;
    case 7:
        /* code */
        return 7;
    
    default:
        return 0;
    }
}
/*
int cadastrar_aluno(){
    pAluno aluno;
    int matricula;
    char nome[50];
    int turma;
    float notas[4];
    int faltas;
    float *ptr;
    
    do
    {
        printf("\nMatricula do aluno: ");
        getchar();
        scanf("%d", &matricula);
        if (check_matricula(matricula) > 0)
        {
            if (busca(matricula) > 1)
            {
                printf("\nMatricula ja existe! \nPor favor, digite uma matricula diferente\n");
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            printf("\nPor favor, digite a matricula no formato \"20210XX\" \n");
        }
    } while (1);

    aluno = criaAluno(matricula, nome, turma, faltas, 
                        notas[0], notas[1], notas[2], notas[3]);
    if(aluno != NULL){

    }

    liberaAluno(&aluno);
}
*/