/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.2
 * En este programa vamos a controlar un LED conectado a uno de los pines digitales de un 
 * Arduino UNO. La activación y posterior apagado del led se realiza intermitentemente
 * a través del bucle infinito de la función loop. El estado del led, se envia como una
 * cadena de terxto por el puerto serial para ser monitoreado
 * ==============================================================================================
 */

//Creamos una constante para identificar al pin digital 9
const int pinLed = 9;

// Creamos una variable para el tiempo de encendido y apagado del LED
int tiempoEncendido = 1000; // 1 segundo
int tiempoApagado = 2000;   // 2 segundos


void setup() {
  // Inicia la comunicación serial a 9600 baudios
  Serial.begin(9600);

  // Configura el PIN 9 como salida
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // Enciende el LED por 1 segundo
  digitalWrite(pinLed, HIGH);
  Serial.println("LED Encendido");
  delay(tiempoEncendido);

  // Apaga el LED por 2 segundos
  digitalWrite(pinLed, LOW);
  Serial.println("LED Apagado");
  delay(tiempoApagado);
}