# 📌 Gestione Sensori con Memoria Dinamica in C

Questo progetto dimostra l'uso della **memoria dinamica** in C per gestire un insieme di **sensori**. Il codice permette di inserire dati su vari sensori, memorizzarli in memoria allocata con `malloc`, e trovare il sensore con il valore più alto.

## 🚀 Funzionalità
- Allocazione dinamica della memoria (`malloc` e `free`)
- Gestione di un array di strutture in memoria
- Ricerca del valore massimo tra i sensori
- Input validato per evitare errori di memoria

---

## 🛠️ Compilazione ed Esecuzione
```sh
gcc src/main.c -o sensori
./sensori
```
---
📖 Esempio di utilizzo
```sh 
Inserisci il numero di sensori:
3

Inserisci i dati per il sensore 1:
ID: 101
Tipo: Temperatura
Valore: 23.5

Inserisci i dati per il sensore 2:
ID: 102
Tipo: Pressione
Valore: 1012.8

Inserisci i dati per il sensore 3:
ID: 103
Tipo: Umidità
Valore: 55.3

Sensore con il valore massimo:
ID=102, Tipo=Pressione, Valore=1012.80
```
---
🇬🇧 English Version
📌 Sensor Management with Dynamic Memory in C
This project demonstrates dynamic memory management in C to handle a set of sensors. The program allows users to insert sensor data, store them dynamically using malloc, and find the sensor with the highest value.

🚀 Features
Dynamic memory allocation (malloc and free)
Handling an array of structures in memory
Finding the highest value among sensors
Validated input to prevent memory errors
🛠️ Compile & Run
```sh 
gcc src/main.c -o sensors
./sensors
```
📖 Example
Enter the number of sensors:
3

Enter data for sensor 1:
ID: 101
Type: Temperature
Value: 23.5

Enter data for sensor 2:
ID: 102
Type: Pressure
Value: 1012.8

Enter data for sensor 3:
ID: 103
Type: Humidity
Value: 55.3

Sensor with the highest value:
ID=102, Type=Pressure, Value=1012.80
```

