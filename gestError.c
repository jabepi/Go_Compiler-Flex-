
#include <stdio.h>

#include "gestError.h"
#include "definiciones.h"

//-----Errores del sistema de entrada------
void errorLectura(char* archivo){
    printf("Error (1.1): No se ha podido abrir el fichero \"%s\"\n", archivo);
}

//-----Errores léxicos------
void elemenotNoIdentificado(char* caracter, int linea){
    printf("Error (2.1) de identificación: <Caracter ASCII: %s, línea: %d>\n", caracter, linea);
}