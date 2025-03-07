#include <stdio.h>
#include <stdlib.h>  // Necessario per malloc() e free()

struct studente {
    char nome[50];
    int eta;
    float voto;
};

void ordinaStudenti(struct studente studenti[], int n); // Prototipo funzione ordinaStudenti

int main() {
    int n;
    printf("Inserisci il numero di studenti che vuoi inserire: \n");
    scanf("%d", &n);
	if (n <= 0) {
		printf("Il numero di studenti deve essere maggiore di zero.\n");
		return 1;
	}

    // Allocazione dinamica dell'array di struct
    struct studente *studenti = malloc(n * sizeof(struct studente));
    if (studenti == NULL) {
        printf("NON ALLOCATO\n");
        return 1; // Termina il programma in caso di errore
    }

    // Inserimento dati
    for (int i = 0; i < n; i++) {
        printf("Inserisci nome, eta e voto per lo studente %d: ", i + 1);
        scanf("%49s %d %f", studenti[i].nome, &studenti[i].eta, &studenti[i].voto);
    }

    // Ordinamento degli studenti in base al voto
    ordinaStudenti(studenti, n);

    // Stampa dei dati ordinati
    printf("\nRegistro Studenti Ordinato per Voto (dal più alto al più basso):\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s\t Età: %d\t Voto: %.2f\n", studenti[i].nome, studenti[i].eta, studenti[i].voto);
    }

    // Liberazione della memoria allocata
    free(studenti);

    return 0;
}

// Funzione per ordinare gli studenti in base al voto (Bubble Sort)
void ordinaStudenti(struct studente studenti[], int n) {
    struct studente temp;
    for (int i = 0; i < n - 1; i++) {  // Ciclo esterno
        for (int j = 0; j < n - i - 1; j++) {  // Ciclo interno
            if (studenti[j].voto < studenti[j + 1].voto) {  // Confronto
                // Scambio degli studenti
                temp = studenti[j];
                studenti[j] = studenti[j + 1];
                studenti[j + 1] = temp;
            }
        }
    }
}



	