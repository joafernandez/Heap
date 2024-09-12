//
// Created by joana on 11/9/2024.
//

#include "Heap.h"
#include <stdio.h>
#include <stdlib.h>



void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// PADRE>HIJO

void maxHeapificar(MaxHeap* maxHeap, int raiz) {
    int mayor = raiz;                           // asumimos q raiz=mayor
    int izquierdo = (raiz << 1) + 1;            // calculamos indice del hijo izq-der
    int derecho = (raiz << 1) + 2;

                                                 // el hijo existe y es mayor? actualizar INDICES:
    if (izquierdo < maxHeap->size && maxHeap->array[izquierdo] > maxHeap->array[mayor])
        mayor = izquierdo;

    if (derecho < maxHeap->size && maxHeap->array[derecho] > maxHeap->array[mayor])
        mayor = derecho;

    if (mayor != raiz) {
        intercambiar(&maxHeap->array[mayor], &maxHeap->array[raiz]);  //LLAMO
        maxHeapificar(maxHeap, mayor); // LLAM  RECURSIVA
    }
}

// Función para construir un MaxHeap a partir de un arreglo
MaxHeap* crearYConstruirHeap(int* arreglo, int tam) {
    MaxHeap* maxHeap = (MaxHeap*) malloc(sizeof(MaxHeap));
    maxHeap->size = tam;
    maxHeap->array = arreglo;

    // Reorganizar el arreglo para cumplir con las propiedades del MaxHeap
    for (int i = (tam - 2) / 2; i >= 0; --i) {
        maxHeapificar(maxHeap, i);    // PADRE>HIJO
    }

    return maxHeap;
}




void heapsort(int* arreglo, int tam) {
    // Fase 1: Construimos el HEAP

    MaxHeap* maxHeap = crearYConstruirHeap(arreglo, tam);

    // Fase 2: ORDEN ASCENDIENTE

    while (maxHeap->size > 1) {
        intercambiar(&maxHeap->array[0], &maxHeap->array[maxHeap->size - 1]); // Intercambiamos raíz con el último elemento
        --maxHeap->size;  // Reducir el tamaño xq ya esta en el orden q corresponde
        maxHeapificar(maxHeap, 0);  // nuevamente padre>hijo
    }
}



void imprimirArray(int* arreglo, int tam) {
    for (int i = 0; i < tam; ++i) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}
