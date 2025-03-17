/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.12
 * Este programa está basado en el código del ejercicio anterior.
 * Esta vez el árbol de decisiones se ha reemplazado por la 
 * función map. Evaluando los resultados se observará que, el 
 * árbol de decisiones es mucho más preciso que la función
 * construida en el ejercicio No.11.
 *
*/

#include <DHT.h>

// Definir el pin donde está conectado el sensor DHT11
#define DHTPIN 12    // Pin digital 12
#define DHTTYPE DHT11

// Crear un objeto DHT para el sensor
DHT dht(DHTPIN, DHTTYPE);

// Definir los límites de la escala de temperatura
const int temperaturaMin = -10;  // Temperatura mínima
const int temperaturaMax = 40;   // Temperatura máxima

void setup() {
  // Inicializar la comunicación serial
  Serial.begin(115200);
  
  // Inicializar el sensor DHT11
  dht.begin();

  // Configurar los pines del 2 al 11 como salida
  for (int n = 2; n < 12; n++) {
    pinMode(n, OUTPUT);
    digitalWrite(n, LOW);  // Asegurarse de que los LEDs estén apagados al inicio
  }
}

void loop() {
  // Leer la humedad
  float humedad = dht.readHumidity();
  
  // Leer la temperatura en grados Celsius
  float temperatura = dht.readTemperature();
  
  // Comprobar si la lectura ha fallado
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer el sensor DHT11");
    return;
  }
  
  // Mostrar los valores de humedad y temperatura en el monitor serial
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  
  // Calcular cuántos LEDs encender
  int numLedsEncendidos = map(temperatura, temperaturaMin, temperaturaMax, 0, 9);
  
  // Limitar el rango para evitar errores (asegurar que esté entre 0 y 9)
  numLedsEncendidos = constrain(numLedsEncendidos, 0, 9);
  
  // Controlar los LEDs según la temperatura
  for (int n = 2; n <= (numLedsEncendidos + 2); n++) {
    if (n - 2 < numLedsEncendidos) {
      digitalWrite(n, HIGH);  // Encender LED
    } else {
      digitalWrite(n, LOW);   // Apagar LED
    }
  }

  delay(2000);  // Esperar 2 segundos antes de la siguiente lectura
}
