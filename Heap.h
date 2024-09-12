//
// Created by joana on 11/9/2024.
//

#ifndef HEAP_HEAP_H
#define HEAP_HEAP_H

#endif //HEAP_HEAP_H

typedef struct {
    int size;
    int* array;
} MaxHeap;


void intercambiar(int* a, int* b);
void maxHeapificar(MaxHeap* maxHeap, int raiz);

MaxHeap* crearYConstruirHeap(int* arreglo, int to);
void heapsort(int* arreglo, int tam);
void imprimirArray(int* arreglo, int tam);
