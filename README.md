# clase-09-proyecto-mitad-semestre

## instrucciones

* hacer login en GitHub.com
* entrar a este repositorio disponible en [https://github.com/aud5i022-2022-1/clase-09-proyecto-mitad-semestre](https://github.com/aud5i022-2022-1/clase-09-proyecto-mitad-semestre)
* hacer click en el botón "Fork" de este repositorio para copiarlo a tu cuenta personal.
* enviar el enlace de tu repositorio y la lista de integrantes a través de u-cursos al instructor.
* ahora puedes editar este archivo siguiendo este enlace [README.md](README.md) y haciendo click en el ícono de lápiz para editar.
* recomendación: grabar tus avances seguido, para que no pierdas tu avance, para esto, baja al final de la sección de edición, elige la opción " Commit directly to the main branch." luego haz click en el botón verde "Commit changes". repite esto cada vez que quieras grabar cambios.
* para subir imágenes, haz click en este enlace a la carpeta [imagenes/](imagenes/), luego haz click en el botón "Add files" y selecciona "Upload files". arrastra tus imágenes o añadelas con el enlace "choose your files". luego elige la opción "Commit directly to the main branch" y haz click en el botón verde "Commit changes"

## contenidos de este repositorio

* carpeta [codigo_arduino/](codigo_arduino/): carpeta para tener el codigo de tu proyecto
  * archivo [odigo_arduino/codigo_arduino.ino](codigo_arduino/codigo_arduino.ino) : debe incluir encabezado y comentarios describiendo tu proyecto
* carpeta [imagenes/](imagenes/): sube aquí las imágenes para tu proyecto.
  * archivo [/imagenes/00-ejemplo.jpg](/imagenes/00-ejemplo.jpg) como ejemplo.
* archivo [README.md](README.md)]: este mismo archivo, aquí escribe tus apuntes durante el proyecto.
* archivo [README.pdf](README.pdf): este archivo pero convertido a PDF, puedes borrarlo.

## ejemplos útiles

cada párrafo es una línea continua de texto. los puntos "." son para punto seguido.
esta línea está escrita en la siguiente línea en el archivo, pero se ve seguida a la anterior.

para hacer un nuevo párrafo, hay que dejar una línea en blanco entremedio.

* las
* listas
* son
* así
  * las sub-listas
  * son así
  * con dos espacios de indentación

los enlaces se hacen con corchetes y después paréntesis. el texto dentro de corchetes es lo que se ve en el enlace, y el texto dentro de paréntesis es dónde va ese enlace. les pido que sea el mismo texto. aquí ejemplos de enlaces a web y a otros archivos dentro de este repositorio.

* [https://www.wikipedia.org/](https://www.wikipedia.org/)
* [https://www.arduino.cc/](https://www.arduino.cc/)
* [imagenes/00-ejemplo.jpg](imagenes/00-ejemplo.jpg)
* [codigo_arduino/codigo_arduino.ino](codigo_arduino/codigo_arduino.ino)

para incluir imágenes que sean visibles en este documento, es igual que un enlace a una imagen, pero con un signo de exclamación antes de los corchetes "!", así:

![texto descripción de la foto](imagenes/00-ejemplo.jpg)

## borrador de muestra

a continuación les dejo un breve borrador con ejemplos, que si completan, tendrán todos los puntos de la pauta, suerte!



# **proyecto audiovisual / villancico con luces de navidad**

## acerca de

este proyecto de mitad de semestre fue hecho en el día martes 10 de mayo 2022, como parte del curso  aud5i022-2022-1.

los integrantes son **Cristina Chamorro, Fabián Campos y Antonia Ramírez.** El objetivo de este es crear un juego de luces a partir de la melodía navideña “Jingle Bells” coordinando así las luces con las respectivas notas de esta melodía, respetando los tiempos de cada nota y asignándoles un LED de color, logrando imitar lo que serian las luces de un árbol de navidad por medio del Arduino.

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

5. Seleccionamos el código de semáforo de la clase 04 y lo modificamos,  aumentando  la cantidad de luces led de 3 a 5, agregando el color azul y blanco 

![texto descripción de la foto](imagenes/luces.jpeg)

6. Nuestro primer surgió cuando el circuito de luces ya programado se saltaba los led de color verde y azul, revisamos el codigo sin ningun exito, tras solicirtar ayuda llegamos a la fuente del problema, las luces led estaban conectadas a pines equivocados, problema que nos mantuvo parados por un largo tiempo


![texto descripción de la foto](imagenes/pin-leds.jpeg)

7. Con ese problema resuelto tenemos las luces listas para ser mezcladas con la melodía 



En primer lugar buscamos la partitura de la melodía Jingle Bells

Posteriormente buscamos el código de notas para arduino

Luego se tradujo cada nota de la melodía en su notación en arduino 

Se definieron los tiempo de duración de cada nota en base a las notas de menor y mayor duración, rango de 8 unidades

Condicionamos el encendido específico de cada luz a una nota específica de la melodia segun la funcion if() en arduino 


## código para microcontrolador Arduino

el código está hecho para Arduino Uno, y está incluido en este repositorio aquí: [codigo_arduino/codigo_arduino.ino](codigo_arduino/codigo_arduino.ino).

este código está basado en los ejemplos de Arduino blabla y en los ejemplos de las clases 04: y 07:  en los enlaces [bla](blabla) y [bla](blabla).

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
