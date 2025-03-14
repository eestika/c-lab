# Buffer Circolare

## Descrizione
Questo progetto implementa un **buffer circolare** in linguaggio C, utilizzando allocazione dinamica della memoria. Il buffer è utile per la gestione di dati in modo FIFO (First In, First Out) ed è spesso usato in sistemi embedded, gestione di dati in tempo reale e driver di periferiche.

## Funzionalità
- **Allocazione dinamica della memoria** con `malloc()`.
- **Operazioni di scrittura (`push()`) e lettura (`pop()`)** con gestione automatica degli indici.
- **Sovrascrittura automatica dei dati più vecchi** se il buffer è pieno.
- **Funzione di stampa dello stato del buffer**.
- **Funzione per liberare la memoria allocata (`free()`)**.

## Struttura del codice
Il codice è organizzato nei seguenti componenti:
- **`CircularBuffer`**: Struttura dati per la gestione del buffer.
- **`initBuffer()`**: Inizializza il buffer e alloca la memoria.
- **`push()`**: Inserisce un valore nel buffer, gestendo il caso di buffer pieno.
- **`pop()`**: Estrae un valore dal buffer.
- **`printBuffer()`**: Stampa lo stato attuale del buffer.
- **`freeBuffer()`**: Libera la memoria allocata.
- **`main()`**: Esempio di utilizzo del buffer circolare.

## Compilazione ed Esecuzione
Per compilare ed eseguire il programma, usare i seguenti comandi:
```sh
gcc circular_buffer.c -o buffer
./buffer
```

## Esempio di Output
```sh
Buffer: [10] [20] [30] [40] [50]
Head: 0, Tail: 0, Count: 5
Estratto: 10
Estratto: 20
Buffer: [_] [_] [30] [40] [50]
Head: 0, Tail: 2, Count: 3
Buffer: [60] [70] [30] [40] [50]
Head: 2, Tail: 2, Count: 5
```

---

# Circular Buffer

## Description
This project implements a **circular buffer** in C, using dynamic memory allocation. The buffer is useful for managing FIFO (First In, First Out) data and is commonly used in embedded systems, real-time data processing, and device drivers.

## Features
- **Dynamic memory allocation** using `malloc()`.
- **Write (`push()`) and read (`pop()`) operations** with automatic index management.
- **Automatic overwriting of the oldest data** when the buffer is full.
- **Function to print buffer status**.
- **Memory deallocation (`free()`)** function.

## Code Structure
The code is structured as follows:
- **`CircularBuffer`**: Data structure for buffer management.
- **`initBuffer()`**: Initializes the buffer and allocates memory.
- **`push()`**: Inserts a value into the buffer, handling the full buffer case.
- **`pop()`**: Retrieves a value from the buffer.
- **`printBuffer()`**: Prints the current buffer status.
- **`freeBuffer()`**: Frees allocated memory.
- **`main()`**: Example usage of the circular buffer.

## Compilation and Execution
To compile and run the program, use the following commands:
```sh
gcc circular_buffer.c -o buffer
./buffer
```

## Example Output
```sh
Buffer: [10] [20] [30] [40] [50]
Head: 0, Tail: 0, Count: 5
Extracted: 10
Extracted: 20
Buffer: [_] [_] [30] [40] [50]
Head: 0, Tail: 2, Count: 3
Buffer: [60] [70] [30] [40] [50]
Head: 2, Tail: 2, Count: 5
```

