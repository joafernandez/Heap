
#include <stdio.h>
#include "Heap.h"

int main() {
    int arreglo[] = {30, 90,20,8,3,9};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original:\n");
    imprimirArray(arreglo, tam);

    heapsort(arreglo, tam);

    printf("\nArreglo ordenado en forma asecndente:\n");
    imprimirArray(arreglo, tam);

    return 0;
}




BREVE DESCRIPCION
 DOS TIPOS
 EN NUESTRO CASO MAX 2 FASES

 1FASE CONSISTE EN (HACES PASO A PASO PADRE>HIJO) LISTO LA CONSTRUCCION
 ANEXO CODIGO

 2DA FASE CONSISTE EN:
 EXPLICAS PASO A PASO (1: RAIIZ X ULTIMO  2 REDUCIS  3: LLAMADA MAX)
 ANEEXO CODIGO
 COMPLEJIDAD
 MEJOR Y PORES CASOS
 APLICACIONES
 CONCLUSION








