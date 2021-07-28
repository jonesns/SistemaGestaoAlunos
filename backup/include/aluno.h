#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

/*pAluno - Ponteiro para struct tAluno*/
typedef struct tAluno * pAluno;

/*
Construtor para estrutura tAluno. 
Retorna um ponteiro para o tipo tAluno.
*/
pAluno novoAluno(int pmatricula, char *pnome, 
                int pcodTurma, float pnotas[], int pfaltas);

/*
Destrutor estrutura tAluno. 
Recebe o endereço do Ponteiro pAluno (indireção múltipla!!)
*/
void liberaAluno(pAluno * aluno);

/*
Define um novo ____ para o aluno. 
Recebe o endereço da estrutura e o ____ desejado.
*/
void Aluno_setNotas(pAluno, float[]);
void Aluno_setFaltas(pAluno, int);

/*
Retorna ___ definido para o Aluno. 
Recebe o endereço da estrutura.
*/
int Aluno_getMatricula(pAluno);
int Aluno_getNome(pAluno);
int Aluno_getCodTurma(pAluno);
float Aluno_getNotas(pAluno);
int Aluno_getFaltas(pAluno);
/*
void printAluno(Aluno *aluno);
int novoAluno(Aluno *objeto);

Aluno novoAluno(int, char[], int, float[], int);

int getMatricula(void);
char *getNome(void);
int getCodigoTurma(void);
char *getNotas(void);
int getFaltas(void);

int setMatricula(int);
int setNome(char[]);
int setCodigoTurma(int);
int setNotas(float[]);
int setFaltas(int);
*/
#endif