//TIPO 1, TIRA DE LEDS SE ENCIENDEN TODOS Y SE APAGAN POCO A POCO
int i = 6;    //PRIMER PIN
int tiempo1 = 200; //TIEMPO DE ESPERA ms

void setup() {

  for (i = 6; i < 10; i++) { //i=6 (primer pin por el que empieza); i<10 (ultimo pin); i++ es el incremento
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (i = 6; i < 10; i++) { //SOLO HE PUESTO 4 LEDS
    digitalWrite(i, 1);
    delay(tiempo1);
  }
   for (i = 6; i < 10; i++) { //SOLO HE PUESTO 4 LEDS
    
    digitalWrite(i, 0);
    delay(tiempo1);
  }
}
