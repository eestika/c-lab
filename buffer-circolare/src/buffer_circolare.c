/*
 * Buffer Circolare in C
 * Autore: Daniele Perez
 * Descrizione: Implementazione di un buffer circolare con operazioni push/pop
 * e gestione dinamica della memoria.
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5  // Dimensione del buffer

// Definizione della struttura del buffer circolare
typedef struct {
    int *buffer;  // Array dinamico
    int head;     // Indice di scrittura
    int tail;     // Indice di lettura
    int count;    // Numero di elementi presenti
} CircularBuffer;

// Funzione per inizializzare il buffer circolare
void initBuffer(CircularBuffer *cb) {
    cb->buffer = (int *)malloc(sizeof(int) * BUFFER_SIZE);
    if (!cb->buffer) {
        printf("Errore nell'allocazione della memoria!\n");
        exit(1);
    }
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}

// Funzione per inserire un valore nel buffer circolare
void push(CircularBuffer *cb, int value) {
    if (cb->count == BUFFER_SIZE) {
        printf("Buffer pieno! Sovrascrivo il valore più vecchio...\n");
        cb->tail = (cb->tail + 1) % BUFFER_SIZE;
    } else {
        cb->count++;
    }
    cb->buffer[cb->head] = value;
    cb->head = (cb->head + 1) % BUFFER_SIZE;
}

// Funzione per estrarre un valore dal buffer circolare
int pop(CircularBuffer *cb) {
    if (cb->count == 0) {
        printf("Buffer vuoto! Nessun dato da leggere.\n");
        return -1;
    }
    int value = cb->buffer[cb->tail];
    cb->tail = (cb->tail + 1) % BUFFER_SIZE;
    cb->count--;
    return value;
}

// Funzione per stampare lo stato del buffer
void printBuffer(CircularBuffer *cb) {
    printf("Buffer: ");
    for (int i = 0; i < BUFFER_SIZE; i++) {
        if (i >= cb->tail && i < cb->tail + cb->count) {
            printf("[%d] ", cb->buffer[i % BUFFER_SIZE]);
        } else {
            printf("[_] ");
        }
    }
    printf("\nHead: %d, Tail: %d, Count: %d\n", cb->head, cb->tail, cb->count);
}

// Funzione per liberare la memoria allocata
void freeBuffer(CircularBuffer *cb) {
    free(cb->buffer);
}

// Funzione principale per testare il buffer circolare
int main() {
    CircularBuffer cb;
    initBuffer(&cb);
    
    push(&cb, 10);
    push(&cb, 20);
    push(&cb, 30);
    push(&cb, 40);
    push(&cb, 50);
    printBuffer(&cb);
    
    printf("Estratto: %d\n", pop(&cb));
    printf("Estratto: %d\n", pop(&cb));
    printBuffer(&cb);
    
    push(&cb, 60);
    push(&cb, 70);
    printBuffer(&cb);
    
    freeBuffer(&cb);
    return 0;
}
