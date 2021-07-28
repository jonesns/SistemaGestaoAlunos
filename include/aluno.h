#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

/*pAluno - Ponteiro para struct tAluno*/
typedef struct tAluno * pAluno;
/*
Construtor para estrutura tAluno. 
Retorna um ponteiro para o tipo tAluno.
pAluno criaAluno(int pmatricula, char *pnome, 
                int pcodTurma);
Destrutor estrutura tAluno. 
Recebe o endereço do Ponteiro pAluno (indireção múltipla!!)
void liberaAluno(pAluno * aluno);
*/
/*
Define um novo ____ para o aluno. 
Recebe o endereço da estrutura e o ____ desejado.
*/
void Aluno_setNotas(pAluno, float, float, float, float);
void Aluno_setFaltas(pAluno, int);

/*
Retorna ___ definido para o Aluno. 
Recebe o endereço da estrutura.
*/
int Aluno_getMatricula(pAluno);
char *Aluno_getNome(pAluno);
int Aluno_getCodTurma(pAluno);
float *Aluno_getNotas(pAluno);
int Aluno_getFaltas(pAluno);

int getQuantidadeAlunosCadastrados(void);
int adicionarAluno(int, char *, int, int, float, float, float, float);
int removerAluno(int);
int atualizarAluno(int, int, float, float, float, float);
void getAlunos(const char *);

#endif