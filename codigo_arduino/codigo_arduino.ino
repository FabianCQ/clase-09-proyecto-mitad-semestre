#define NOTA_SOL5   784
#define NOTA_LA5    880
#define NOTA_SI5    988
#define NOTA_DO6   1047
#define NOTA_RE6   1175

int melodia[] = {
  NOTA_SI5, NOTA_SI5, NOTA_SI5,
  NOTA_SI5, NOTA_SI5, NOTA_SI5,
  NOTA_SI5, NOTA_RE6, NOTA_SOL5, NOTA_LA5,
  NOTA_SI5,
  NOTA_DO6, NOTA_DO6, NOTA_DO6, NOTA_DO6,
  NOTA_DO6, NOTA_SI5, NOTA_SI5, NOTA_SI5, NOTA_SI5,
  NOTA_SI5, NOTA_LA5, NOTA_LA5, NOTA_SI5,
  NOTA_LA5, NOTA_RE6
};

int duraciones[] = {
  4, 4, 2,
  4, 4, 2,
  4, 4, 4, 4,
  1,
  4, 4, 6, 8,
  4, 4, 4, 8, 8,
  4, 4, 4, 4,
  2, 2
};

int multiplicadorDuracion = 2;
float multiplicadorPausa = 2;
int pinParlante = 8;


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
int pinAzul = 10;
int pinBlanca = 9;

// pin de Arduino para boton
int pinBoton = 4;

// variable que almacena valor actual boton
int valorBoton = 0;

// tiempo de cada luz
int tiempoRoja = 300;
int tiempoAmarilla = 300;
int tiempoVerde = 300;
int tiempoAzul = 300;
int tiempoBlanca = 300;

void setup() {

  for (int nota = 0; nota < 26 ; nota++) {

    // duracion de la nota en milisegundos
    int duracionNota = 1000 / (duraciones[nota] * multiplicadorDuracion);

    // tone(pin, frecuencia, duracion)
    tone(pinParlante, melodia[nota], duracionNota);

    // hay 5 notas
    // cada nota prendera una luz distinta



    if (melodia[nota] == NOTA_DO6)  {
      prenderLuz(pinRoja, tiempoRoja);
    }  else if (melodia[nota] == NOTA_SOL5)  {
      prenderLuz(pinAmarilla, tiempoAmarilla);
    }   else if (melodia[nota] == NOTA_RE6)  {
      prenderLuz(pinVerde, tiempoVerde);
    }   else if (melodia[nota] == NOTA_SI5)  {
      prenderLuz(pinAzul, tiempoAzul);
    }   else if (melodia[nota] == NOTA_LA5)  {
      prenderLuz(pinBlanca, tiempoBlanca);
    }

    // pausa entre notas
    int pausa = duracionNota * multiplicadorPausa;

    // pausar para mantener nota
    delay(pausa);

    // silenciar nota
    noTone(pinParlante);

  }

  // iniciar comunicacion serial
  Serial.begin(9600);

  // configurar pines de luces como salida
  pinMode(pinVerde, OUTPUT); // verde
  pinMode(pinAmarilla, OUTPUT); // amarillo
  pinMode(pinRoja, OUTPUT); // roja
  pinMode(pinAzul, OUTPUT); // azul
  pinMode(pinBlanca, OUTPUT); // blanco
}

void loop() {
  // put your main code here, to run repeatedly:

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
