# cursoarduino

Ejercicio No.1
En este programa vamos a encender y apagar el led que se encuentra incorporado en el Arduino. En el caso de un Arduino UNO, el LED se encuentra conectado al PIN digital 13.

Ejercicio No.2
En este programa vamos a controlar un LED conectado a uno de los pines digitales de un Arduino UNO. La activación y posterior apagado del led se realiza intermitentemente a través del bucle infinito de la función loop.

Ejercicio No.3
En este programa vamos a simular el funcionamiento de un semáforo. Vamos a conectar tres LEDs a pines digitales del Arduino UNO. El programa consiste en crear una secuencia de luces donde, en primer lugar, ilumina el LED rojo, luego el LED verde y por ultimo, ilumina el LED amarillo.

Ejercicio No.4
En este programa vamos a controlar el encendido de un led a través de un interruptor pulsador conectado a través del pin 2. Mientras que el led es conectado al pin 10. El led permanecerá apagado hasta que sea oprimido el pulsador, cuando el led se encenderá. Este solo se apagara cuando se suelte el pulsador.

Ejercicio No.5
En este programa vamos a modificar el comportamiento del programa que se ha realizado en el ejercicio No. 4. El interruptor pulsador es conectado a través del pin 2. Mientras que el led es conectado al pin 10. Cada vez que sea oprimido el pulsador, el led cambiara de estado, ya sea de apagado a encendido o, de encendido a apagado.

Ejercicio No.6
En este programa vamos a controlar 10 pines digitales del Arduino UNO. El programa consiste en encender y apagar de manera consecutiva 10 leds conectados a los pines digitales del 2 al 11. La secuencia comienza en el pin 2 y activa uno a uno los leds hasta llegar al pin 11. Luego, se regresa la secuencia activando uno a uno los leds desde el pin 11 hasta llegar a la activación del pin 2.

Ejercicio No.7
En este programa vamos a controlar los mismos 10 pines digitales del Arduino UNO que se emplearon en el ejercicio No. 6. El programa consiste en emplear la estructura repetitiva FOR para encender y apagar de manera consecutiva los 10 leds conectados a los pines digitales del 2 al 11. La secuencia comienza en el pin 2 y activa uno a uno los leds hasta llegar al pin 11 y luego regresar encendiendo y apagando los leds hasta el led 2.

Ejercicio No.8
En este programa vamos a controlar el pin digital 11 y el led conectado a él. El programa consiste en emplear la estructura repetitiva FOR para aumentar y disminuir la intensidad de brillo del led. Esto se logra gracias a que el pin 11 es un pin PWM, esta característica le permite modular el ancho del pulso a la salida, por lo que es posible modificar el flujo de corriente a través del led.

Ejercicio No.9
En este programa vamos a controlar todos los pines digitales PWM del Arduino UNO. El programa consiste en emplear las estructuras repetitivas FOR anidadas para cambiar la intensidad del brillo de los leds que se encuentran conectados a los pines 3, 5, 6, 9, 10, 11.

Ejercicio No.10
En este programa vamos a realizar la lectura de un sensor de temperatura y humedad. El sensor utiliza la librería DHT.h que se encarga de procesar el valor análogo obtenido en la lectura para generar las variables de temperatura y humedad que se muestran a través del puerto serie.

Ejercicio No.11
En este programa tomamos como base el código del ejercicio anterior. Se realiza una lectura del sensor de temperatura y humedad y, según el valor de temperatura, se deben encender un número determinado de leds en un rango de -10 a 40 °c. Donde 10 °c equivale a 0 leds encendidos y, 40 °c equivale a 10 leds encendidos.

Ejercicio No.12
Este programa está basado en el código del ejercicio anterior. Esta vez el árbol de decisiones se ha reemplazado por la función map. Evaluando los resultados se observará que, el árbol de decisiones es mucho más preciso que la función construida en el ejercicio No.11.
