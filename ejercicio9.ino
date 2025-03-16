/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.9
 * En este programa vamos a controlar todos los pines digitales PWM
 * del Arduino UNO.
 * El programa consiste en emplear la estructuras repetitivas FOR 
 * que se aniden para cambiar la intensidad del brillo de los leds 
 * que se encuentran conectados a los pines 3, 5, 6, 9, 10, 11 
 *
*/

// Pines PWM del Arduino UNO
const int pwmPins[] = {3, 5, 6, 9, 10, 11}; // Pines que soportan PWM
const int numPins = sizeof(pwmPins) / sizeof(pwmPins[0]); // Cantidad de pines PWM

void setup() {
    // Configurar los pines PWM como salida
    for (int i = 0; i < numPins; i++) {
        pinMode(pwmPins[i], OUTPUT);
    }
}

void loop() {
    // Encender y apagar cada LED de uno en uno con aumento y disminución de intensidad
    for (int i = 0; i < numPins; i++) {
        // Aumentar la intensidad del LED actual
        for (int brightness = 0; brightness <= 255; brightness++) {
            analogWrite(pwmPins[i], brightness); // Ajustar brillo del LED
            delay(10); // Suavizar el cambio de brillo
        }

        // Reducir la intensidad del LED actual
        for (int brightness = 255; brightness >= 0; brightness--) {
            analogWrite(pwmPins[i], brightness); // Ajustar brillo del LED
            delay(10); // Suavizar el cambio de brillo
        }
    }
}
