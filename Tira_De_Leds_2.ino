//TIPO DOS, TIRA DE LEDS SE ENCIENDE Y SE APAGA DE UNO EN UNO
int i = 6;    //PRIMER PIN
int tiempo1 = 100; //TIEMPO DE ESPERA ms

void setup() {

  for (i = 6; i < 10; i++) { //i=6 (primer pin por el que empieza); i<10 (ultimo pin); i++ es el incremento
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (i = 6; i < 10; i++) { //SOLO HE PUESTO 4 LEDS
    digitalWrite(i, 1);
    delay(tiempo1);
    digitalWrite(i, 0);
    delay(tiempo1);
  }
}
