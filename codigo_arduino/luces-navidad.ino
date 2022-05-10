// proyecto-mitad-semestre-navidad
// v0.0.10 mayo 2022
// hecho con Arduino Uno y IDE 1.8.19

// 0 es luz roja
// 1 es luz amarilla
// 2 es luz verde
// 3 es luz azul
// 4 es luz blanca
int estadoActual = 0;

// pines de Arduino para cada luz
int pinVerde = 5;
int pinAmarilla = 6;
int pinRoja = 7;
int pinAzul = 8;
int pinBlanca = 9;

// pin de Arduino para boton
int pinBoton = 4;

// variable que almacena valor actual boton
int valorBoton = 0;

// tiempo de cada luz
int tiempoRoja = 1000;
int tiempoAmarilla = 1000;
int tiempoVerde = 1000;
int tiempoAzul = 1000;
int tiempoBlanca = 1000;

// setup() ocurre una vez al inicio
void setup() {

  // iniciar comunicacion serial
  Serial.begin(9600);

  // configurar pines de luces como salida
  pinMode(pinVerde, OUTPUT); // verde
  pinMode(pinAmarilla, OUTPUT); // amarillo
  pinMode(pinRoja, OUTPUT); // roja
  pinMode(pinAzul, OUTPUT); // azul
  pinMode(pinBlanca, OUTPUT); // blanco

  // configurar pin de boton como entrada
  pinMode(pinBoton, INPUT);

  // apagar luces
  apagarLuces();
}

// loop() ocurre despues de setup(), en bucle
void loop() {

  // para comprobar funcionamiento
  // Serial.println("navidad");

  // actualizar valor boton
  leerBoton();

  // si el boton no esta presionado
  if (valorBoton == 0) {

    // prender luz segun estado actual
    if (estadoActual == 0) {
      prenderLuz(pinRoja, tiempoRoja);
    }
    else if (estadoActual == 1) {
      prenderLuz(pinAmarilla, tiempoAmarilla);
    }
    else if (estadoActual == 2) {
      prenderLuz(pinVerde, tiempoVerde);
    }
    else if (estadoActual == 3) {
      prenderLuz(pinAzul, tiempoAzul);
    }
        else if (estadoActual == 4) {
      prenderLuz(pinBlanca, tiempoBlanca);
    }

    // actualizar estado actual, sumar 1
    // si llega a 5, volver a 0
    estadoActual = (estadoActual + 1) % 5;

  }
  // si es que boton esta presionado
  else {
    // mover estado actual a luz amarilla pasando de roja a verde
    estadoActual = 1;
  }

}

// funcion para apagar todas las luces
void apagarLuces() {
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarilla, LOW);
  digitalWrite(pinRoja, LOW);
  digitalWrite(pinAzul, LOW);
  digitalWrite(pinBlanca, LOW);
}

// funcion para prender una luz durante un momento
void prenderLuz(int color, int tiempoEncendido) {
  apagarLuces();
  digitalWrite(color, HIGH);
  delay(tiempoEncendido);
}

// funcion para leer el estado actual del boton
void leerBoton() {
  valorBoton = digitalRead(pinBoton);
  Serial.print("boton: ");
  Serial.println(valorBoton);
}
