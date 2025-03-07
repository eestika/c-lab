#include <stdio.h>
#include <stdlib.h>  // Necessario per malloc() e free()
#include <string.h>  // Necessario per strcmp()

struct libri {
    char titolo[100];
    char autore[50];
    int anno_pubblicazione;
};

// Prototipo della funzione cercaLibro()
void cercaLibro(struct libri libro[], int n);

int main() {
    int n;

    // Richiesta del numero di libri
    printf("Inserisci il numero di libri che vuoi inserire: \n");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Il numero di libri deve essere maggiore di zero.\n");
        return 1;
    }

    // Allocazione dinamica dell'array di struct
    struct libri *libro = malloc(n * sizeof(struct libri));
    if (libro == NULL) {
        printf("NON ALLOCATO\n");
        return 1; // Termina il programma in caso di errore
    }

    // Inserimento dati
    for (int i = 0; i < n; i++) {
        printf("\nInserisci il titolo del libro %d: ", i + 1);
        scanf(" %[^\n]", libro[i].titolo); // Permette di leggere stringhe con spazi

        printf("Inserisci l'autore del libro %d: ", i + 1);
        scanf(" %[^\n]", libro[i].autore);

        printf("Inserisci l'anno di pubblicazione del libro %d: ", i + 1);
        scanf("%d", &libro[i].anno_pubblicazione);
    }

    // Stampa dei libri inseriti
    printf("\n📚 Elenco dei libri memorizzati:\n");
    for (int i = 0; i < n; i++) {
        printf("📖 Titolo: %s | 🖊 Autore: %s | 📆 Anno: %d\n", 
               libro[i].titolo, libro[i].autore, libro[i].anno_pubblicazione);
    }

    // Chiamata alla funzione di ricerca
    cercaLibro(libro, n);

    // Liberazione della memoria allocata
    free(libro);

    return 0;
}

void cercaLibro(struct libri libro[], int n) {
    char titolo_cercato[100]; // Corretto: array di caratteri per memorizzare il titolo
    printf("\nInserisci il titolo del libro da cercare: ");
    scanf(" %[^\n]", titolo_cercato); // Legge l'input con spazi

    int trovato = 0; // Variabile flag per verificare se il libro è stato trovato

    for (int i = 0; i < n; i++) {
        if (strcmp(titolo_cercato, libro[i].titolo) == 0) { // Confronto corretto
            printf("\n✅ Libro trovato!\n");
            printf("📖 Titolo: %s\n", libro[i].titolo);
            printf("🖊 Autore: %s\n", libro[i].autore);
            printf("📆 Anno di pubblicazione: %d\n", libro[i].anno_pubblicazione);
            trovato = 1; // Indica che il libro è stato trovato
            break; // Esce dal ciclo per evitare ricerche inutili
        }
    }

    if (!trovato) { // Se nessun libro è stato trovato
        printf("\n❌ Libro non trovato.\n");
    }
}
