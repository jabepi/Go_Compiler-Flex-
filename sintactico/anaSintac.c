#include <stdio.h>

#include "anaSintac.h"
#include "../definiciones.h"
#include "../FLEX/wrapperFlex.h"



void inciarSintac() {

    compLexico comp = NULL;

    printf("------------Componentes Léxicos-----------\n");

    comp = siguienteComponente();
    while (getCompLex(&comp)!=0) {
        printf("<Componente léxico: %3d; "
               "Lexema: \"%s\">\n", getCompLex(&comp), getLexema(&comp));
        destruirComponente(&comp);
        comp = siguienteComponente();
    }

    destruirComponente(&comp);

    printf("------------------------------------------\n\n");
}