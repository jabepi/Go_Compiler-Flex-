# Analizador léxico y sintáctico para el lenguaje Go empleando Flex 

Este analziador léxico está desarrollado únicamente para funconar sobre el código concurrentsum.go

## Características principales
Esta implementación es la actualización de "Go_compiler", en concreto, detro del esquema
Concurrentsum.go -> sistema de entrada <-> analizadore léxico <-> analizador sintáctico -> Salida

Flex sustituirá al sistema de entrada y al analizador léxico. De esta forma, Flex dialoga directa-
mente con concurrentsum.go y proporciona el sisguietne componenete léxico.

## Ejecución 
Para la ejecución del código:
1. make
2. ./CompiladorGo "nombreArchivo"

Para borrar archivos generados de la compilación:
1. make clean	(sin incluir el ejecutable)
2. make cleanall (incluyendo el ejecutable) 
