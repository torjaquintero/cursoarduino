/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.10
 * En este programa vamos a realizar la lectura de un sensor de 
 * temperatura y humedad. El sensor utiliza la libreria DHT.h que
 * se encarga de procesar el valor analogo obtenido en la lectura 
 * para generar las variables de temperatura y humedad que se 
 * muestran a través del puerto serie  
 *
*/

#include <DHT.h>

// Definir el pin donde está conectado el sensor DHT11
#define DHTPIN 12    // Pin digital 2

// Definir el tipo de sensor (en este caso DHT11)
#define DHTTYPE DHT11

// Crear un objeto DHT para el sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Inicializar la comunicación serial
  Serial.begin(9600);
  
  // Inicializar el sensor DHT11
  dht.begin();
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
  
  delay(2000);  // Esperar 2 segundos antes de la siguiente lectura
}
