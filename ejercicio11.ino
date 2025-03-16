/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.11
 * En este programa tomamos como base el código del ejercicio
 * anterior. Se realiza una lectura del sensor de temperatura y 
 * humedad y, según el valor de temperatura, se deben encender
 * un número determinado de LEDs en un rango de -10 a 40 °C.
 * Donde -10 °C equivale a 0 LEDs encendidos y, 40 °C equivale
 * a 10 LEDs encendidos.
*/

#include <DHT.h>

// Definir el pin donde está conectado el sensor DHT11
#define DHTPIN 12    // Pin digital 12
#define DHTTYPE DHT11 // Tipo de sensor utilizado (DHT11)

// Crear un objeto DHT para el sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Inicializar la comunicación serial para depuración
  Serial.begin(9600);
  
  // Inicializar el sensor DHT11
  dht.begin();

  // Configurar los pines del 2 al 11 como salida y apagarlos inicialmente
  for (int n = 2; n < 12; n++) {
    pinMode(n, OUTPUT); // Definir el pin como salida
    digitalWrite(n, LOW);  // Asegurarse de que los LEDs estén apagados al inicio
  }
}

void loop() {
  // Leer la humedad
  float humedad = dht.readHumidity();
  
  // Leer la temperatura en grados Celsius
  float temperatura = dht.readTemperature();
  
  // Comprobar si la lectura ha fallado y mostrar un mensaje de error si es necesario
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer el sensor DHT11");
    return; // Salir del loop en caso de error
  }
  
  // Mostrar los valores de humedad y temperatura en el monitor serial
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print(" %\t");
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  
  // Determinar cuántos LEDs encender según la temperatura
  int numLedsEncendidos = 0;

  if (temperatura < -10) {
    numLedsEncendidos = 0; // Si la temperatura es menor a -10°C, ningún LED se enciende
  } else if (temperatura >= -10 && temperatura < -5) {
    numLedsEncendidos = 1; // Entre -10°C y -5°C, se enciende solo un LED
  } else if (temperatura >= -5 && temperatura < 0) {
    numLedsEncendidos = 2; // Entre -5°C y 0°C, se encienden dos LEDs
  } else if (temperatura >= 0 && temperatura < 5) {
    numLedsEncendidos = 3; // Entre 0°C y 5°C, se encienden tres LEDs
  } else if (temperatura >= 5 && temperatura < 10) {
    numLedsEncendidos = 4; // Entre 5°C y 10°C, se encienden cuatro LEDs
  } else if (temperatura >= 10 && temperatura < 15) {
    numLedsEncendidos = 5; // Entre 10°C y 15°C, se encienden cinco LEDs
  } else if (temperatura >= 15 && temperatura < 20) {
    numLedsEncendidos = 6; // Entre 15°C y 20°C, se encienden seis LEDs
  } else if (temperatura >= 20 && temperatura < 25) {
    numLedsEncendidos = 7; // Entre 20°C y 25°C, se encienden siete LEDs
  } else if (temperatura >= 25 && temperatura < 30) {
    numLedsEncendidos = 8; // Entre 25°C y 30°C, se encienden ocho LEDs
  } else if (temperatura >= 30 && temperatura < 35) {
    numLedsEncendidos = 9; // Entre 30°C y 35°C, se encienden nueve LEDs
  } else if (temperatura >= 35 && temperatura <= 40) {
    numLedsEncendidos = 10; // Entre 35°C y 40°C, se encienden los diez LEDs
  }

  // Encender y apagar los LEDs según el número calculado
  for (int n = 2; n < 12; n++) {
    if (n - 2 < numLedsEncendidos) {
      digitalWrite(n, HIGH);  // Encender LED si está dentro del rango permitido
    } else {
      digitalWrite(n, LOW);   // Apagar LED si está fuera del rango permitido
    }
  }

  delay(2000);  // Esperar 2 segundos antes de la siguiente lectura del sensor
}
