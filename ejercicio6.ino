/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.6
 * En este programa vamos a controlar 10 pines digitales
 * del Arduino UNO. El programa consiste en encender y 
 * apagar de manera consecutiva 10 leds conectados a los
 * pines digitales del 2 al 11. La secuencia comienza en
 * el pin 2 y activa uno a uno los leds hasta llegar al
 * pin 11 y volver al 2.
*/

int Vel=200;

void setup() {
  // Configura los pines del 2 al 11 como salida
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // Enciende el LED 1 por Vel milisegundos
  digitalWrite(2, HIGH);
  delay(Vel);
  digitalWrite(2, LOW);

  // Enciende el LED 2 por Vel milisegundos
  digitalWrite(3, HIGH);
  delay(Vel);
  digitalWrite(3, LOW);

  // Enciende el LED 3 por Vel milisegundos
  digitalWrite(4, HIGH);
  delay(Vel);
  digitalWrite(4, LOW);

  // Enciende el LED 4 por Vel milisegundos
  digitalWrite(5, HIGH);
  delay(Vel);
  digitalWrite(5, LOW);

  // Enciende el LED 5 por Vel milisegundos
  digitalWrite(6, HIGH);
  delay(Vel);
  digitalWrite(6, LOW);

  // Enciende el LED 6 por Vel milisegundos
  digitalWrite(7, HIGH);
  delay(Vel);
  digitalWrite(7, LOW);

  // Enciende el LED 7 por Vel milisegundos
  digitalWrite(8, HIGH);
  delay(Vel);
  digitalWrite(8, LOW);

  // Enciende el LED 8 por Vel milisegundos
  digitalWrite(9, HIGH);
  delay(Vel);
  digitalWrite(9, LOW);

  // Enciende el LED 9 por Vel milisegundos
  digitalWrite(10, HIGH);
  delay(Vel);
  digitalWrite(10, LOW);

  // Enciende el LED 10 por Vel milisegundos
  digitalWrite(11, HIGH);
  delay(Vel);
  digitalWrite(11, LOW);
}
