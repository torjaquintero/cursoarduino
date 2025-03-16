/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.5
 * En este programa vamos a modificar el comportamiento del programa
 * que se ha realizado en el ejercicio No. 4. El interruptor 
 * pulsador es conectado a través del pin 2. Mientras que el led 
 * es conectado al pin 10. Cada vez que sea oprimido el pulsador, 
 * el led cambiara de estado, ya sea de apagado a encendido o, de 
 * encendido a apagado.
*/

//Declaramos una constante para el pulsador
const int pinPulsador=2;
//Declaramos una constante para el led
const int pinLed = 10;

//Declaramos la variable "estado" para guardar el estado del pulsador
int estado = LOW;

// Declaramos las variables "estadoAnterior" y "estadoPresente" para guardar el estado presente y el estado anterior del pulsador
int estadoPresente = LOW;
int estadoAnterior = LOW;

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

  // Si se activa el pulsador y el estado anterior es bajo, la variable "estadoPresente" cambia de estado
  if ((estado == HIGH) && (estadoAnterior == LOW)){
    estadoPresente = 1 - estadoPresente;
    delay(25);
  }

  //El estado anterior se actualiza al estado del pulsador
  estadoAnterior = estado;

  //El led se enciende o se apaga segun la variable "estadoPresente", un estado alto enciende el led y un estado bajo lo apaga 
  if (estadoPresente == HIGH)
    digitalWrite(pinLed,HIGH);
  else
    digitalWrite(pinLed,LOW);
}