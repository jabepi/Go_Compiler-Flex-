#include "wrapperFlex.h"
#include "../gestError.h"
#include "stdio.h"
#include "stdlib.h"
#include "lexyy.h"
FILE* fichero;

compLexico siguienteComponente(){
    compLexico comp;
    constCompLex(&comp);                           //Inciamos la variable componente léxico

    //Insertamos el lexema y el componente léxico en la estructura que enivamos al analizador léico
    insertarComLex(&comp, sigComp());
    insertarLexema(&comp, getLex());



    return comp;
}

void abrirArchivo(char *nomArchivo) {

    fichero = fopen(nomArchivo, "r");

    if (fichero) {
        //Le pasamos a flex el archivo
        setFile(fichero);

    } else {
        errorLectura(nomArchivo);
        exit(1);
    }
}

void cerrarArchivo() {
    fclose(fichero);
    liberar();
}
