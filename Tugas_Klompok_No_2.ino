int POW1 = 10;
int POW2 = 11;
int POW3 = 12;
int POW4 = 13;
int pin_7segmen[11][7] = {
{ 1,1,1,1,1,1,0 }, // = 0
{ 0,1,1,0,0,0,0 }, // = 1
{ 1,1,0,1,1,0,1 }, // = 2
{ 1,1,1,1,0,0,1 }, // = 3
{ 0,1,1,0,0,1,1 }, // = 4
{ 1,0,1,1,0,1,1 }, // = 5
{ 1,0,1,1,1,1,1 }, // = 6
{ 1,1,1,0,0,0,0 }, // = 7
{ 1,1,1,1,1,1,1 }, // = 8
{ 1,1,1,1,0,1,1 }, // = 9
{ 0,0,0,0,0,0,0 } // mati
};

void setup() {
  pinMode(POW1, OUTPUT), pinMode(POW2, OUTPUT), pinMode(POW3,OUTPUT), pinMode(POW4,OUTPUT);
  for (byte k = 2; k < 10; k++) {
    pinMode(k,OUTPUT);
  }
  digitalWrite(9,LOW);
}

void loop() {
// Muhammad Fadhil Firdaus
  fadhil(2); 
  delay(800);
  fadhil(5);
  delay(800);
  fadhil(10);
  delay(800);
  fadhil(1); 
  delay(800);
  fadhil(2); 
  delay(800);
  fadhil(10);
  delay(800);
  fadhil(2); 
  delay(800);
  fadhil(0); 
  delay(800);
  fadhil(0); 
  delay(800);
  fadhil(0); 
  delay(800);
  fadhil(10);
  delay(1000);

  // Muhammad Afif Ramadhan
  afif(3); 
  delay(800);
  afif(0);
  delay(800);
  afif(10);
  delay(800);
  afif(1); 
  delay(800);
  afif(1); 
  delay(800);
  afif(10);
  delay(800);
  afif(2); 
  delay(800);
  afif(0); 
  delay(800);
  afif(0); 
  delay(800);
  afif(1); 
  delay(800);
  afif(10);
  delay(1000);

// St. Nurlita R
  lita(0); 
  delay(800);
  lita(6);
  delay(800);
  lita(10);
  delay(800);
  lita(0); 
  delay(800);
  lita(4); 
  delay(800);
  lita(10);
  delay(800);
  lita(2); 
  delay(800);
  lita(0); 
  delay(800);
  lita(0); 
  delay(800);
  lita(1); 
  delay(800);
  lita(10);
  delay(1000);

//Ayu Safitri
  yua(1); 
  delay(800);
  yua(7);
  delay(800);
  yua(10);
  delay(800);
  yua(1); 
  delay(800);
  yua(0); 
  delay(800);
  yua(10);
  delay(800);
  yua(2); 
  delay(800);
  yua(0); 
  delay(800);
  yua(0); 
  delay(800);
  yua(1); 
  delay(800);
  yua(10);
  delay(5000);
}

void fadhil(byte baris) {
  digitalWrite(POW1,0);
  digitalWrite(POW2,1);
  digitalWrite(POW3,1);
  digitalWrite(POW4,1);
  byte pin = 2;
  for (byte kolom = 0; kolom < 8; ++ kolom) {
    digitalWrite(pin,pin_7segmen[baris][kolom]);
    ++pin;
 }
}

void afif(byte baris) {
  digitalWrite(POW1,1);
  digitalWrite(POW2,0);
  digitalWrite(POW3,1);
  digitalWrite(POW4,1);
  byte pin = 2;
  for (byte kolom = 0; kolom < 8; ++ kolom) {
    digitalWrite(pin,pin_7segmen[baris][kolom]);
    ++pin;
 }
}

void lita(byte baris) {
  digitalWrite(POW1,1);
  digitalWrite(POW2,1);
  digitalWrite(POW3,0);
  digitalWrite(POW4,1);
  byte pin = 2;
  for (byte kolom = 0; kolom < 8; ++ kolom) {
    digitalWrite(pin,pin_7segmen[baris][kolom]);
    ++pin;
 }
}

void yua(byte baris) {
  digitalWrite(POW1,1);
  digitalWrite(POW2,1);
  digitalWrite(POW3,1);
  digitalWrite(POW4,0);
  byte pin = 2;
  for (byte kolom = 0; kolom < 8; ++ kolom) {
    digitalWrite(pin,pin_7segmen[baris][kolom]);
    ++pin;
 }
}
