# 📚 Gestione Libreria - Library Management System

## 📌 Descrizione | Description
Questo programma in **C** permette di gestire un insieme di libri in una libreria.  
L'utente può inserire libri, visualizzare l'elenco e cercare un libro per titolo.  

This **C** program allows managing a collection of books in a library.  
The user can add books, view the list, and search for a book by title.  

---

## 🚀 Funzionalità | Features
✅ **Inserimento dinamico** di un numero variabile di libri  
✅ **Ricerca di un libro** per titolo  
✅ **Gestione della memoria dinamica** con `malloc()` e `free()`  

✅ **Dynamic insertion** of a variable number of books  
✅ **Search for a book** by title  
✅ **Memory management** using `malloc()` and `free()`  

---

## 🛠 Compilazione ed esecuzione | Compilation & Execution

### 📌 Compilare il programma | Compile the program
```bash
gcc gestione_libri.c -o gestione_libri
```
---
📌 Eseguire il programma | Run the program
```bash
./gestione_libri
```
---
📜 Struttura del codice | Code Structure
📌 Struttura dati | Data Structure
Il programma usa una struct chiamata libri, che contiene:
```c 
struct libri {
    char titolo[100];      // Titolo del libro | Book title
    char autore[50];       // Nome dell'autore | Author's name
    int anno_pubblicazione; // Anno di pubblicazione | Publication year
};
```
📌 Funzioni principali | Main Functions
main(): Gestisce l'inserimento dei dati e la stampa dei libri.
cercaLibro(): Permette di cercare un libro in base al titolo.
🖥 Esempio di utilizzo | Example Usage
📌 Input dell'utente | User Input
Inserisci il numero di libri che vuoi inserire: 2
Inserisci il titolo del libro 1: Il Signore degli Anelli
Inserisci l'autore del libro 1: J.R.R. Tolkien
Inserisci l'anno di pubblicazione del libro 1: 1954

Inserisci il titolo del libro 2: 1984
Inserisci l'autore del libro 2: George Orwell
Inserisci l'anno di pubblicazione del libro 2: 1949

Inserisci il titolo del libro da cercare: 1984
```
📌 Output del programma | Program Output
```
📚 Elenco dei libri memorizzati:
📖 Titolo: Il Signore degli Anelli | 🖊 Autore: J.R.R. Tolkien | 📆 Anno: 1954
📖 Titolo: 1984 | 🖊 Autore: George Orwell | 📆 Anno: 1949

✅ Libro trovato!
📖 Titolo: 1984
🖊 Autore: George Orwell
📆 Anno di pubblicazione: 1949
```