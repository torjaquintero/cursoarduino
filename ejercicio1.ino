/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.1
 * En este programa vamos a encender y apagar el led que se encuentra incorporado en el Arduino 
 * En el caso de un Arduino UNO, el LED se encuentra conectado al PIN digital 13.
 * ==============================================================================================
 */

// Define como constante el número de pin en el que se encuentra conectado el LED
const int ledPin = 13;

/*En la funcion Setup vamos a indicar la configuracion 
inicial de los pines de la tarjeta*/

void setup() {
  // Configura pin digital 13 como salida
  pinMode(ledPin, OUTPUT);
  // También se puede configurar el led incorporado con la palabra reservada LED_BUILTIN
  //pinMode(LED_BUILTIN, OUTPUT);
}

//En la funcion Loop vamos a encender y apagar el LED de la placa

void loop() {
  // Enciende el LED por 1 segundo
  digitalWrite(ledPin, HIGH);        //Establece un nivel de tension alto en el pin 13
  delay(1000);                       //Retrasa la ejecucion del programa por 1000 milisegundos (1 seg)

  // Apaga el LED por 2 segundos
  digitalWrite(LED_BUILTIN, LOW);    //Establece un nivel de tension bajo en el pin 13
  delay(2000);                       //Retrasa la ejecucion del programa por dos segundos
}