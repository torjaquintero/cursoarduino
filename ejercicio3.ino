/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.3
 * En este programa vamos a simular el funcionamiento de un semáforo.
 * Vamos a conectar tres LEDs a pines digitales del Arduino UNO. El programa consiste en crear 
 * una secuencia de luces donde, en primer lugar, ilumina el LED rojo, luego el LED verde y
 * por ultimo, ilumina el LED amarillo
* ==============================================================================================
 */

//Creamos constantes para identificar los pìnes donde estan conectados los LEDs del semaforo
const int LED_Rojo=12;
const int LED_Ambar=11;
const int LED_Verde=10;

//En la funcion setup configuramos pines digitales como salida
void setup() { 
  pinMode(LED_Rojo, OUTPUT);        //Pin 12
  pinMode(LED_Ambar, OUTPUT);       //Pin 11
  pinMode(LED_Verde, OUTPUT);       //Pin 10
}


void loop() {
  digitalWrite(LED_Rojo, HIGH);   // Enciende el LED rojo
  delay(4000);                    // Espera 4 segundos
  digitalWrite(LED_Rojo, LOW);    // Apaga el LED
  
  digitalWrite(LED_Verde, HIGH);  // Enciende el LED verde
  delay(6000);                    // Espera 6 segundos
  digitalWrite(LED_Verde, LOW);   // Apaga el LED

  digitalWrite(LED_Ambar, HIGH);  // Enciende el LED ambar  
  delay(2000);                    // Espera 1 segundo     
  digitalWrite(LED_Ambar, LOW);   // Apaga el LED
}
