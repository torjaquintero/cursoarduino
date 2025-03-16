/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.7
 * En este programa vamos a controlar los mismos 10 pines digitales
 * del Arduino UNO que se emplearon en el ejercicio No. 6.
 * El programa consiste en emplear la estructura repetitiva FOR para 
 * encender y apagar de manera consecutiva los 10 LEDs conectados a 
 * los pines digitales del 2 al 11. La secuencia comienza en 
 * el pin 2 y activa uno a uno los LEDs hasta llegar al pin 11 y
 * luego regresa encendiendo y apagando los LEDs hasta el LED 2.
*/

// Variable utilizada para recorrer los pines en el bucle
int n = 0;

// Variable que define la velocidad de encendido y apagado de los LEDs (en milisegundos)
int Vel = 50;

void setup() {
  // Configura los pines del 2 al 11 como salida usando un bucle FOR
  for (n = 2; n < 12; n++) {
    pinMode(n, OUTPUT); // Define cada pin como salida
  }
}

void loop() {
  // Encendido secuencial de los LEDs del pin 2 al 11
  for (n = 2; n < 12; n++) {
    digitalWrite(n, HIGH); // Enciende el LED en el pin correspondiente
    delay(Vel); // Espera el tiempo definido en Vel
    digitalWrite(n, LOW); // Apaga el LED
    delay(Vel); // Espera antes de encender el siguiente LED
  }

  // Encendido secuencial inverso de los LEDs del pin 11 al 2
  for (n = 11; n > 1; n--) {
    digitalWrite(n, HIGH); // Enciende el LED en el pin correspondiente
    delay(Vel); // Espera el tiempo definido en Vel
    digitalWrite(n, LOW); // Apaga el LED
    delay(Vel); // Espera antes de encender el siguiente LED
  }
}
