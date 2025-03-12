#include <stdio.h>
#include <stdint.h>

union registro {
    uint16_t valore; // Accesso all'intero a 16 bit

    struct {
        uint8_t valorebasso; // Byte meno significativo (LSB)
        uint8_t valorealto;  // Byte più significativo (MSB)
    } byte;

    struct {
        uint16_t flag0  : 1;
        uint16_t flag1  : 1;
        uint16_t flag2  : 1;
        uint16_t flag3  : 1;
        uint16_t flag4  : 1;
        uint16_t flag5  : 1;
        uint16_t flag6  : 1;
        uint16_t flag7  : 1;
        uint16_t flag8  : 1;
        uint16_t flag9  : 1;
        uint16_t flag10 : 1;
        uint16_t flag11 : 1;
        uint16_t flag12 : 1;
        uint16_t flag13 : 1;
        uint16_t flag14 : 1;
        uint16_t flag15 : 1;
    } bit;  // Nome della struttura per i bit field
};

int main() {
    union registro reg;

    // Assegniamo un valore intero a 16 bit
    reg.valore = 0xABCD;

    // Stampiamo i valori in formato esadecimale
    printf("Valore intero: 0x%X\n", reg.valore);
    printf("Byte basso: 0x%X\n", reg.byte.valorebasso);
    printf("Byte alto: 0x%X\n", reg.byte.valorealto);

    // Stampiamo i singoli bit
    printf("Stato dei bit:\n");
    for (int i = 0; i < 16; i++) {
        printf("Bit %d: %d\n", i, (reg.valore >> i) & 1);
    }

    return 0;
}