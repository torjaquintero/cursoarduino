/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.6
 * En este programa vamos a controlar 10 pines digitales
 * del Arduino UNO. El programa consiste en encender y 
 * apagar de manera consecutiva 10 leds conectados a los
 * pines digitales del 2 al 11. La secuencia comienza en
 * el pin 2 y activa uno a uno los leds hasta llegar al
 * pin 11. Luego, se regresa la secuencia activando uno
 * a uno los leds desde el pin 11 hasta llegar a la
 * activación del pin 2.
*/

// Declaramos una variable global para definir la velocidad de encendido y apagado de los LEDs
int Vel = 200;  // Tiempo en milisegundos que cada LED permanecerá encendido

void setup() {
  // Configuramos los pines del 2 al 11 como salidas para controlar los LEDs
  // Esto permite que el Arduino envíe señales a estos pines y encienda o apague los LEDs conectados a ellos
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
  // Secuencia de encendido de izquierda a derecha (pin 2 al 11)
  // Cada LED se enciende, espera un tiempo definido por 'Vel' y luego se apaga
  digitalWrite(2, HIGH);  // Enciende el LED en el pin 2
  delay(Vel);              // Espera el tiempo especificado en 'Vel'
  digitalWrite(2, LOW);   // Apaga el LED en el pin 2

  digitalWrite(3, HIGH);
  delay(Vel);
  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);
  delay(Vel);
  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);
  delay(Vel);
  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);
  delay(Vel);
  digitalWrite(6, LOW);

  digitalWrite(7, HIGH);
  delay(Vel);
  digitalWrite(7, LOW);

  digitalWrite(8, HIGH);
  delay(Vel);
  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);
  delay(Vel);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  delay(Vel);
  digitalWrite(10, LOW);

  digitalWrite(11, HIGH);
  delay(Vel);
  digitalWrite(11, LOW);

  // Secuencia de encendido de derecha a izquierda (pin 11 al 2)
  // Ahora el proceso se invierte, encendiendo los LEDs en orden inverso
  digitalWrite(10, HIGH);  // Enciende el LED en el pin 10
  delay(Vel);
  digitalWrite(10, LOW);   // Apaga el LED en el pin 10

  digitalWrite(9, HIGH);
  delay(Vel);
  digitalWrite(9, LOW);

  digitalWrite(8, HIGH);
  delay(Vel);
  digitalWrite(8, LOW);

  digitalWrite(7, HIGH);
  delay(Vel);
  digitalWrite(7, LOW);

  digitalWrite(6, HIGH);
  delay(Vel);
  digitalWrite(6, LOW);

  digitalWrite(5, HIGH);
  delay(Vel);
  digitalWrite(5, LOW);

  digitalWrite(4, HIGH);
  delay(Vel);
  digitalWrite(4, LOW);

  digitalWrite(3, HIGH);
  delay(Vel);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  delay(Vel);
  digitalWrite(2, LOW);
}