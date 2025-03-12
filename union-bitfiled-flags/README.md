# Union e Bit Field con Gestione Flag in C

## 📌 Descrizione
Questo progetto estende l'uso delle `union` e `struct` in C per la gestione di un registro a 16 bit, introducendo funzioni per **attivare, disattivare e controllare flag specifici**.

### 🔹 **Funzionalità principali**
- **Accesso all'intero registro** (`uint16_t`).
- **Accesso ai singoli byte** (`valorebasso`, `valorealto`).
- **Accesso ai bit singoli** tramite `bit field`.
- **Manipolazione dinamica dei bit** con funzioni:
  - `setFlag()` → Attiva un bit specifico.
  - `clearFlag()` → Disattiva un bit specifico.
  - `isFlagSet()` → Controlla se un bit è attivo.

Questo codice è particolarmente utile per la **programmazione embedded**, dove è necessario controllare **registri di periferiche**.

## 📂 Struttura del progetto
```
union-bitfield-flags/
│── src/
│   ├── union_bitfield_flags.c
│── README.md
```

## 🛠 Compilazione ed Esecuzione
Per compilare il codice, usa `gcc`:
```sh
gcc -o union_bitfield_flags src/union_bitfield_flags.c
```
Per eseguirlo:
```sh
./union_bitfield_flags
```

## 📜 Output atteso
```sh
Registro iniziale: 0x0
Registro dopo setFlag(2): 0x4
Il flag ERROR è attivo? 1
Registro dopo clearFlag(2): 0x0
Il flag ERROR è attivo? 0
```

---

# Union and Bit Field with Flag Management in C

## 📌 Description
This project extends the use of `union` and `struct` in C for 16-bit register management, introducing functions to **enable, disable, and check specific flags**.

### 🔹 **Main Features**
- **Access to the entire register** (`uint16_t`).
- **Access to individual bytes** (`valorebasso`, `valorealto`).
- **Bitwise access** using `bit fields`.
- **Dynamic bit manipulation** with functions:
  - `setFlag()` → Activates a specific bit.
  - `clearFlag()` → Deactivates a specific bit.
  - `isFlagSet()` → Checks if a bit is active.

This code is particularly useful in **embedded programming**, where **peripheral register control** is essential.

## 📂 Project Structure
```
union-bitfield-flags/
│── src/
│   ├── union_bitfield_flags.c
│── README.md
```

## 🛠 Compilation and Execution
To compile the code, use `gcc`:
```sh
gcc -o union_bitfield_flags src/union_bitfield_flags.c
```
To run it:
```sh
./union_bitfield_flags
```

## 📜 Expected Output
```sh
Initial Register: 0x0
Register after setFlag(2): 0x4
Is ERROR flag active? 1
Register after clearFlag(2): 0x0
Is ERROR flag active? 0
```

