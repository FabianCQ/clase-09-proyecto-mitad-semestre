# **proyecto audiovisual / villancico con luces de navidad**

## acerca de

El objetivo de este es crear un juego de luces a partir de la melodía navideña “Jingle Bells” coordinando así las luces con las respectivas notas de esta melodía, respetando los tiempos de cada nota y asignándoles un LED de color, logrando imitar lo que serian las luces de un árbol de navidad por medio del Arduino.

los integrantes de este proyecto son 
* Cristina Chamorro
* Fabián Campos
* Antonia Ramírez

*este proyecto fue hecho en el día martes 10 de mayo 2022, como parte del curso  aud5i022-2022-1.*

## lista de materiales

los materiales son:

* Arduino Uno
* protoboard
* cables
* parlante
* luces
* resistores

## armado de circuito

estos son los pasos para armar el circuito:


1. Conectamos el dispositivo Arduino 1 al puerto USB  del computador 

2. Dividimos el trabajo en dos partes, la sección luces y la sección melodia 

3. Investigamos acerca de la melodía y cómo codificarla, concluimos en que la melodía consta de 5 notas a las que cada una le corresponderá un color de led
  
![texto descripción de la foto](imagenes/jinglebells.jpeg)
  
  - la luz roja es la nota DO6
  *   la luz amarilla es la nota SOL5
  *   la luz verde es la nota RE6
  *   la luz azul es la nota SI5
  *   La luz blanca es la nota LA5

4. Buscamos referentes de códigos que podrían sernos útiles para ambas partes 

![texto descripción de la foto](imagenes/arrays.png)
*esto pertenece a [JuegosRobótica.es](https://juegosrobotica.es/musica-con-arduino/#)

5. Seleccionamos el código de semáforo de la clase 04 y lo modificamos,  aumentando  la cantidad de luces led de 3 a 5, agregando el color azul y blanco 

![texto descripción de la foto](imagenes/luces.jpeg)

6. Nuestro primer surgió cuando el circuito de luces ya programado se saltaba los led de color verde y azul, revisamos el codigo sin ningun exito, tras solicirtar ayuda llegamos a la fuente del problema, las luces led estaban conectadas a pines equivocados, problema que nos mantuvo parados por un largo tiempo

![texto descripción de la foto](imagenes/pin-leds.jpeg)

7. Con ese problema resuelto tenemos las luces listas para ser mezcladas con la melodía 





* En primer lugar buscamos la partitura de la melodía Jingle Bells

* Posteriormente buscamos el código de notas para arduino

* Luego se tradujo cada nota de la melodía en su notación en arduino 

* Se definieron los tiempo de duración de cada nota en base a las notas de menor y mayor duración, rango de 8 unidades
![texto descripción de la foto](imagenes/notas.jpeg)

* Condicionamos el encendido específico de cada luz a una nota específica de la melodia segun la funcion if() en arduino 


## código para microcontrolador Arduino

el código está hecho para Arduino Uno, y está incluido en este repositorio [aquí](https://github.com/FabianCQ/clase-09-proyecto-mitad-semestre/blob/main/codigo_arduino/codigo_arduino.ino).

este código está basado en el trabajo de nuestro profesor [aarón montoya](https://github.com/montoyamoraga) y en el ejemplo de semáforo de la [clase 04](https://github.com/montoyamoraga/aud5i022-2022-1/tree/main/clases/clase-04) y la [clase 07](https://github.com/montoyamoraga/aud5i022-2022-1/tree/main/clases/clase-07) sobre entrada y salida MIDI

primero creamos las variables blabla para almacenar valores para blabla. la variabla bla es análoga en el rango blabla y la variable blabla es digital y tiene valores posibles 0 y 1.

primero en setup() hacemos que los pines X e Y sean entradas digitales, el pin Z sea salida digital, y abrimos la comunicación serial.

luego en loop() leemos las entradas y usamos la salida Z para lograr prender una luz LED.

## conclusiones

en este proyecto tuvimos los siguientes aprendizajes: 

* botón pulsador
* circuito para 

lo más difícil de este proyecto fue bla.

cometimos los siguientes errores durante el armado del circuito y en el código, y los solucionamos así y este error no lo supimos resolver.

este proyecto lo vemos como la base para lograr bla, nos hace pensar en bla, y nos gustaría expandirlo para 10 botones y mil luces y diez arduinos conectados por wifi.
