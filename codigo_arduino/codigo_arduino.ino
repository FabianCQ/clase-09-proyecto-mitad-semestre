#include "notas.h"
int melodia[] = {
  NOTA_SI4, NOTA_SI4, NOTA_SI4,
  NOTA_SI4, NOTA_SI4, NOTA_SI4,
  NOTA_SI4, NOTA_RE3, NOTA_SOL4, NOTA_LA4,
  NOTA_SI4,
  NOTA_DO3, NOTA_DO3, NOTA_DO3, NOTA_DO3,
  NOTA_DO3, NOTA_SI4, NOTA_SI4, NOTA_SI4, NOTA_SI4,
  NOTA_SI4, NOTA_LA4, NOTA_LA4, NOTA_SI4,
  NOTA_LA4, NOTA_RE3
};

int duraciones[] = {
  2, 2, 4,
  2, 2, 4,
  2, 2, 2, 2,
  8,
  2, 2, 3, 1,
  2, 2, 2, 1, 1,
  2, 2, 2, 2,
  4, 4
};

int multiplicadorDuracion = 4;
float multiplicadorPausa = 1.3;
int pinParlante = 8;

void setup() {

for (int nota = 0; nota < 8 ; nota++) {

    // duracion de la nota en milisegundos
    int duracionNota = 1000 / (duraciones[nota] * multiplicadorDuracion);

    // tone(pin, frecuencia, duracion)
    tone(pinParlante, melodia[nota], duracionNota);

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
