#include "../include/aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct tAluno
{
    /* parametros da classe/objeto*/
    int matricula;
    char *nome;
    int codTurma;
    float *notas;
    int faltas;

    /*métodos da classe/objeto*/
    /*
    void (*ptrMetodo)(Aluno);
    int (*getMatricula)(void);
    char *(*getNome)(void);
    int (*getCodigoTurma)(void);
    char *(*getNotas)(void);
    int (*getFaltas)(void);
    */
};


pAluno novoAluno(int pmatricula, char *pnome, 
                int pcodTurma, float pnotas[], int pfaltas)
{
    pAluno objeto;
    objeto = (pAluno)malloc(sizeof(struct tAluno));

    /*if (objeto == NULL)
    {
        return 0;
    }*/
    if(objeto != NULL){
        objeto->matricula = pmatricula;
        objeto->nome = pnome;
        objeto->codTurma = pcodTurma;
        objeto->notas = pnotas;
        objeto->faltas = pfaltas;
    }
    
    /*
    objeto->ptrMetodo = printAluno;
    return 1;
    */
   return objeto;
}

void liberaAluno(pAluno * aluno){
    if(aluno != NULL){
        free(*aluno);
        *aluno = NULL;
    }
}

/* SET */
void Aluno_setNotas(pAluno aluno, float pnotas[]){
    if(aluno != NULL){
        aluno->notas = pnotas;
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
int Aluno_getNome(pAluno aluno){
    if(aluno != NULL){
        /***/
    }
    return -1;
}
int Aluno_getCodTurma(pAluno aluno){
    if(aluno != NULL){
        return aluno->codTurma;
    }
    return -1;
}
float Aluno_getNotas(pAluno aluno){
    if(aluno != NULL){
        /***/
    }
    return -1;
}
int Aluno_getFaltas(pAluno aluno){
    if(aluno != NULL){
        return aluno->faltas;
    }
    return -1;
}



/*
void printAluno(Aluno *aluno)
{
    printf(
        "Matricula: %d \nTurma: %d \nNotas: %d, %d, %d, %d \nFaltas: %d \n",
           aluno->matricula,
           aluno->codTurma,
           aluno->notas[0], aluno->notas[1], aluno->notas[2], aluno->notas[3],
           aluno->faltas
           );
}
*/