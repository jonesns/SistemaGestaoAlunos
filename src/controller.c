#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../include/controller.h"
#include "../include/aluno.h"

int check_matricula(int matricula){
    if ((matricula > 2021000) && (matricula < 2021100)){
        return 1;
    }else{
        return 0;
    }
}

