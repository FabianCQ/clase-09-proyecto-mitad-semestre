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

void setup() {

  for (int nota = 0; nota < 26 ; nota++) {

    // duracion de la nota en milisegundos
    int duracionNota = 1000 / (duraciones[nota] * multiplicadorDuracion);

    // tone(pin, frecuencia, duracion)
    tone(pinParlante, melodia[nota], duracionNota);

    // hay 5 notas
    // cada nota prendera una luz distinta

    if (melodia[nota] == NOTA_DO6)  {
      // prender luz roja
    }  else if (melodia[nota] == NOTA_RE6)  {
      // prender luz verde
    }   else if (melodia[nota] == NOTA_RE6)  {
      // prender luz verde
    }   else if (melodia[nota] == NOTA_RE6)  {
      // prender luz verde
    }   else if (melodia[nota] == NOTA_RE6)  {
      // prender luz verde
    }

  // pausa entre notas
  int pausa = duracionNota * multiplicadorPausa;

  // pausar para mantener nota
  delay(pausa);

  // silenciar nota
  noTone(pinParlante);

}

}

void loop() {
  // put your main code here, to run repeatedly:

}
