/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.13
 * Este programa permite medir la intensidad de luz utilizando un sensor LDR
 * conectado al puerto analógico A0 del Arduino. Cuando se realiza la 
 * lectura del sensor, se convierte el valor analógico de 10 bits (0-1023) 
 * en su equivalente en voltios dentro del rango de 0 a 5V. Finalmente,
 * los valores obtenidos se imprimen en el monitor serie, permitiendo
 * visualizar tanto la lectura del sensor, como el nivel de tensión
 * correspondiente, facilitando el análisis de los cambios en la intensidad
 * de la luz detectada.
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
