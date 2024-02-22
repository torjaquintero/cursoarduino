/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.2
 * En este programa vamos a controlar un LED conectado a uno de los pines digitales de un 
 * Arduino UNO. La activación y posterior apagado del led se realiza intermitentemente
 * a través del bucle infinito de la función loop
 * ==============================================================================================
 */

//Creamos una constante para identificar al pin digital 12
const int pinLed = 3;

//Creamos una variable para el tiempo de encendido y apagado el led
int tiempo=3000;

void setup() {
  // Configura el PIN 12 como salida
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // Enciende el LED por 1 segundo
  digitalWrite(pinLed, HIGH);
  delay(tiempo);

  // Apaga el LED por 2 segundos
  digitalWrite(pinLed, LOW);
  delay(tiempo);
}
