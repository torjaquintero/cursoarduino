/* 
 *  Bienvenidos a Sys On Chip
 * ==============================
 * Ejercicio No.8
 * En este programa vamos a controlar el pin digital 11 y el led 
 * conectado a él. El programa consiste en emplear la estructura 
 * repetitiva FOR para aumentar y disminuir la intensidad de brillo
 * del led. Esto se logra gracias a que el pin 11 es un pin PWM,
 * esta característica le permite modular el ancho del pulso a la 
 * salida, por lo que es posible modificar el flujo de corriente a
 * través del led
*/

// Definir el pin PWM
const int pwmPin = 11; // Pin PWM que se va a controlar

void setup() {
    // Configurar el pin 11 como salida
    pinMode(pwmPin, OUTPUT);
}

void loop() {
    // Aumentar la intensidad del LED
    for (int brightness = 0; brightness <= 255; brightness++) {
        analogWrite(pwmPin, brightness); // Ajustar brillo
        delay(10); // Suavizar el cambio de brillo
    }

    // Reducir la intensidad del LED
    for (int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(pwmPin, brightness); // Ajustar brillo
        delay(10); // Suavizar el cambio de brillo
    }
}

