#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/aluno.h"

struct tAluno
{
    int matricula;
    char nome[50];
    int codTurma;
    float notas[4];
    int faltas;

};

const int MAX_ALUNOS = 30;
int qtdCadastrados = 0;
pAluno alunos[30];


pAluno criaAluno(int pmatricula, char pnome[], 
                int pcodTurma)/*, int pfaltas,
                float n1, float n2, float n3, float n4)*/
{
    pAluno objeto;
    objeto = (pAluno)malloc(sizeof(struct tAluno));

    if(objeto != NULL){
        objeto->matricula = pmatricula;
        strcpy(objeto->nome, pnome);
        objeto->codTurma = pcodTurma;
        /*
        objeto->notas[0] = n1;
        objeto->notas[1] = n2;
        objeto->notas[2] = n3;
        objeto->notas[3] = n4;
        objeto->faltas = pfaltas;
        */
    }
    
   return objeto;
}

void liberaAluno(pAluno * aluno){
    if(aluno != NULL){
        free(*aluno);
        *aluno = NULL;
    }
}

/* SET */
void Aluno_setNotas(pAluno aluno, float n1, float n2, float n3, float n4){
    if(aluno != NULL){
        aluno->notas[0] = n1; 
        aluno->notas[1] = n2;
        aluno->notas[2] = n3;
        aluno->notas[3] = n4;
    }
}
void Aluno_setFaltas(pAluno aluno, int pfaltas){
    if(aluno != NULL){
        aluno->faltas = pfaltas;
    }
}

/* GET */
int Aluno_getMatricula(pAluno aluno){
    if(aluno != NULL){
        return aluno->matricula;
    }
    return -1;
}
char *Aluno_getNome(pAluno aluno){
    if(aluno != NULL){
        return aluno->nome;
    }
    return NULL;
}
int Aluno_getCodTurma(pAluno aluno){
    if(aluno != NULL){
        return aluno->codTurma;
    }
    return -1;
}
float *Aluno_getNotas(pAluno aluno){
    if(aluno != NULL){
       return aluno->notas;
    }
    return NULL;
}
int Aluno_getFaltas(pAluno aluno){
    if(aluno != NULL){
        return aluno->faltas;
    }
    return -1;
}

int getQuantidadeAlunosCadastrados(void){
    return qtdCadastrados;
}

int buscaAluno(int matricula){
    int count = 0;
    while (count < MAX_ALUNOS)
    {
        if(alunos[count] != NULL){
            if(Aluno_getMatricula(alunos[count]) == matricula){
                return count;
            }
        count = count+1;
        }
    }
    return -1;
}

int adicionarAluno(int matricula, char* nome, int codTurma, int faltas,
                    float n1, float n2, float n3, float n4){
    int count = 0;
    pAluno aluno;

    aluno = criaAluno(matricula, nome, codTurma);/*, faltas, 
                        notas[0], notas[1], notas[2], notas[3]);*/
    
    if(aluno != NULL){
        printf("aluno != NULL\n");
        Aluno_setNotas(aluno, n1, n2, n3, n4);
        Aluno_setFaltas(aluno, faltas);
    }else{
        exit(1);
    }

    while (count < MAX_ALUNOS)
    {
        printf("while > %d\n", count);
        if(alunos[count] == NULL){
            printf("if == NULL > %d\n", count);
            alunos[count] = aluno;
            qtdCadastrados = qtdCadastrados+1;
            return 1;
        }
        count = count+1;
    }
    return 0;
}

int removerAluno(int matricula){
    int i = buscaAluno(matricula);
    if(i > -1){
        liberaAluno(&alunos[i]);
        qtdCadastrados = qtdCadastrados-1;
        return 1;
    }else{
        return 0;
    }
}

int atualizarAluno(int matricula, int faltas,
                    float n1, float n2, float n3, float n4){
    int i = buscaAluno(matricula);
    if(i > -1){
        Aluno_setNotas(alunos[i], n1, n2, n3, n4);
        Aluno_setFaltas(alunos[i], faltas);
        return 1;
    }else{
        return 0;
    }
}

char *getAlunos(void){
    int count = 0;
    float *ptr;
    int i = qtdCadastrados;
    char temp[4500];
    char aux[150];
    char *saida;
    
    while (count < MAX_ALUNOS)
    {
        if(alunos[count] != NULL){
            ptr = Aluno_getNotas(alunos[count]);
            /*sprintf(saida[i],*/
            /*printf("%s\n","-----------------------------------------------------------------------");*/
            sprintf(aux,
                    "Matricula: %d;\nNome: %s;\nTurma: %d;\nNotas: %.2f, %.2f, %.2f, %.2f;\nFaltas: %d;\n",
                    Aluno_getMatricula(alunos[count]), Aluno_getNome(alunos[count]), Aluno_getCodTurma(alunos[count]), 
                    *(ptr+0), *(ptr+1),*(ptr+2), *(ptr+3), Aluno_getFaltas(alunos[count]));
            i = i+1;
            /*printf("\n%s\n", aux);*/
            strcat(temp,aux);
        }
        count = count+1;
    }
    saida = (char*)malloc((strlen(temp)+1)*sizeof(char));
    strcpy(saida, temp);
    return saida;
}

/*
void printAluno(Aluno *aluno)
{
    float *ptr;
    ptr = Aluno_getNotas(aluno);
    sprintf(saida,
        "Matricula: %d;\nNome: %s;\nTurma: %d;\nNotas: %.2f, %.2f, %.2f, %.2f;\nFaltas: %d;\n",
           Aluno_getMatricula(alunos[count]),
           Aluno_getNome(alunos[count]),
           Aluno_getCodTurma(alunos[count]),
           *(ptr+0), *(ptr+1),*(ptr+2), *(ptr+3),
           Aluno_getFaltas(alunos[count])
           );
}
*/