# Union e Bit Field in C

## 📌 Descrizione
Questo progetto dimostra come utilizzare `union` e `struct` in C per la gestione di un registro a 16 bit. L'obiettivo è permettere l'accesso ai dati in tre modi diversi:
1. **Accesso all'intero registro** come `uint16_t`.
2. **Accesso ai due byte separati** (LSB e MSB).
3. **Accesso ai singoli bit** attraverso una `struct` con bit field.

Il codice è particolarmente utile nella programmazione di **microcontrollori e sistemi embedded**, dove l'ottimizzazione della memoria è fondamentale.

## 📂 Struttura del progetto
```
union-bitfield/
│── src/
│   ├── union_bitfield.c
│── README.md
```

## 🛠 Compilazione ed Esecuzione
Per compilare il codice, usa `gcc`:
```sh
gcc -o union_bitfield src/union_bitfield.c
```
Per eseguirlo:
```sh
./union_bitfield
```

## 📜 Output atteso
```sh
Valore intero: 0xABCD
Byte basso: 0xCD
Byte alto: 0xAB
Stato dei bit:
Bit 0: 1
Bit 1: 0
...
Bit 15: 1
```

---

# Union and Bit Field in C

## 📌 Description
This project demonstrates how to use `union` and `struct` in C to manage a 16-bit register. The goal is to allow data access in three different ways:
1. **Access to the entire register** as `uint16_t`.
2. **Access to two separate bytes** (LSB and MSB).
3. **Access to individual bits** through a `struct` with bit fields.

This code is particularly useful in **microcontroller and embedded systems programming**, where memory optimization is crucial.

## 📂 Project Structure
```
union-bitfield/
│── src/
│   ├── union_bitfield.c
│── README.md
```

## 🛠 Compilation and Execution
To compile the code, use `gcc`:
```sh
gcc -o union_bitfield src/union_bitfield.c
```
To run it:
```sh
./union_bitfield
```

## 📜 Expected Output
```sh
Value as uint16_t: 0xABCD
Low byte: 0xCD
High byte: 0xAB
Bit states:
Bit 0: 1
Bit 1: 0
...
Bit 15: 1
```

