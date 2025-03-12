#include <stdio.h>
#include <stdint.h>

union registro {
    uint16_t valore; // Accesso all'intero a 16 bit

    struct {
        uint8_t valorebasso; // Byte meno significativo (LSB)
        uint8_t valorealto;  // Byte più significativo (MSB)
    } byte;

    struct {
        uint16_t ENABLE  : 1;  // Bit 0 - Abilita dispositivo
        uint16_t MODE    : 1;  // Bit 1 - 0: Standard, 1: Avanzato
        uint16_t ERROR   : 1;  // Bit 2 - Segnala errore
        uint16_t RISERVATO : 5; // Bit 3-7 - Non usati
        uint16_t ID      : 8;  // Bit 8-15 - Identificativo periferica
    } bit;
}; 

// Prototipi funzioni
void setFlag(union registro *reg, int bit);
void clearFlag(union registro *reg, int bit);
int isFlagSet(union registro *reg, int bit);

int main() {
    union registro reg;

    // Inizializziamo il registro a 0
    reg.valore = 0x0000;
    printf("Registro iniziale: 0x%X\n", reg.valore);

    // Attiviamo il flag ERROR (bit 2)
    setFlag(&reg, 2);
    printf("Registro dopo setFlag(2): 0x%X\n", reg.valore);

    // Controlliamo se il bit 2 è attivo
    printf("Il flag ERROR è attivo? %d\n", isFlagSet(&reg, 2));

    // Disattiviamo il flag ERROR (bit 2)
    clearFlag(&reg, 2);
    printf("Registro dopo clearFlag(2): 0x%X\n", reg.valore);

    // Controlliamo di nuovo il bit 2
    printf("Il flag ERROR è attivo? %d\n", isFlagSet(&reg, 2));

    return 0;
}

// Funzione per attivare un flag
void setFlag(union registro *reg, int bit) {
    reg->valore |= (1 << bit);
}

// Funzione per disattivare un flag
void clearFlag(union registro *reg, int bit) {
    reg->valore &= ~(1 << bit);
}

// Funzione per controllare se un flag è attivo
int isFlagSet(union registro *reg, int bit) {
    return (reg->valore & (1 << bit)) != 0;
}
