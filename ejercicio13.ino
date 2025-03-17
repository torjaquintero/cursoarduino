/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.13
 * Este programa vamos a realizar una lectura del puerto análogo A0, donde el 
 * se encuentra conectado un sensor de luz (LDR). El programa consiste en leer
 * el valor analógico del sensor y mostrarlo en el monitor serie, permitiendo
 * observar los cambios en la intensidad de luz detectada con su unidad de medida.
*/

// Configuración de pines
const int ldrPin = A0;  // Pin conectado al divisor de voltaje del LDR

void setup() {
  pinMode(ldrPin, INPUT);    // Configurar el pin del LDR como entrada
  Serial.begin(115200);      // Iniciar comunicación serie para monitoreo
}

void loop() {
  // Leer el valor analógico del LDR
  int valorLuz = analogRead(ldrPin);
  
  // Convertir a voltios (5V / 1023 * lectura)
  float voltaje = valorLuz * (5.0 / 1023.0);

  // Mostrar el valor en el monitor serie con la unidad de medida
  Serial.print("Valor de luz: ");
  Serial.print(valorLuz);
  Serial.print(" | Voltaje: ");
  Serial.print(voltaje);
  Serial.println(" V");

  delay(500); // Retardo para estabilizar la lectura
}
