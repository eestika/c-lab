#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Raccolta_Sensore {
    int id;
    char tipo[20];
    float valore;
} Raccolta_Sensore;

void StampaDati(Raccolta_Sensore *sensori, int n);
Raccolta_Sensore* TrovaMax(Raccolta_Sensore *sensori, int n);

int main() {
    int n;

    // Controllo input valido
    do {
        printf("Inserisci il numero totale dei sensori che vuoi inserire:\n");
        if (scanf("%d", &n) != 1 || n <= 0) {
            printf("Errore! Inserisci un numero valido maggiore di zero.\n");
            while (getchar() != '\n'); // Svuota buffer input
        } else {
            break;
        }
    } while (1);

    // Allocazione dinamica dell'array di struct
    Raccolta_Sensore *sensori = malloc(n * sizeof(Raccolta_Sensore));
    if (sensori == NULL) {
        printf("Errore di allocazione memoria!\n");
        return 1;
    }

    // Inserimento dati con gestione sicura delle stringhe
    for (int i = 0; i < n; i++) {
        printf("Inserisci i dati per il sensore %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &sensori[i].id);
        printf("Tipo: ");
        scanf("%19s", sensori[i].tipo);  // Evita buffer overflow
        printf("Valore: ");
        scanf("%f", &sensori[i].valore);
    }

    // Stampa dati in formato tabella
    StampaDati(sensori, n);

    // Trova il sensore con il valore massimo
    Raccolta_Sensore *maxSensore = TrovaMax(sensori, n);
    if (maxSensore) {
        printf("\nIl sensore con il valore più alto è:\n");
        printf("ID = %d, Tipo = %s, Valore = %.2f\n",
               maxSensore->id, maxSensore->tipo, maxSensore->valore);
    }

    free(sensori);  // Libera memoria

    return 0;
}

void StampaDati(Raccolta_Sensore *sensori, int n) {
    printf("\n%-5s %-20s %-10s\n", "ID", "Tipo", "Valore");
    printf("----------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10.2f\n", sensori[i].id, sensori[i].tipo, sensori[i].valore);
    }
}

Raccolta_Sensore* TrovaMax(Raccolta_Sensore *sensori, int n) {
    if (n <= 0) return NULL;  

    Raccolta_Sensore *maxSensore = sensori;  

    for (Raccolta_Sensore *p = sensori + 1; p < sensori + n; p++) {  
        if (p->valore > maxSensore->valore) {
            maxSensore = p;
        }
    }
    return maxSensore;
}




	
	 
 
 
 
 
 