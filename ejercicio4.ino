/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.4
 * En este programa vamos a controlar el encendido de un led
 * a traves de un interruptor pulsador conectado a través del pin 3.
 * Mientras que el led es conectado al pin 2. El led permanecera
 * apagado hasta que sea oprimido el pulsador, cuando el led se 
 * se encendera. Este solo se apagara cuando se suelte el pulsador.
*/

//Declaramos una constante para el pulsador
const int pinPulsador=3;
//Declaramos una constante para el pin 4
const int pinLed = 2;

//Declaramos la variable "estado" para guardar el estado del pulsador
int estado;

void setup() {
  // Configura el PIN 3 como entrada
  pinMode(pinPulsador, INPUT);

  // Configura el PIN 2 como salida
  pinMode(pinLed, OUTPUT);
}

void loop() {
  /* realiza una lectura en el pin de entrada donde esta conectado el pulsador. El nivel logico obtenido se guarda en la variable estado*/
  estado = digitalRead(pinPulsador);
  delay(50);

  /* si el pulsador se oprime genera un estado alto en el pin de entrada y se encendera el led*/
  if (estado == HIGH)
    digitalWrite(pinLed, HIGH);

  /* si el pulsador esta suelto genera un estado bajo en el pin de entrada y se apaga el led*/
  else
    digitalWrite(pinLed, LOW);
}