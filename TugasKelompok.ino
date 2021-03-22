int POW1 = 11;
int POW2 = 12;
int POW3 = 13;

byte pin_7segmen[11][7] = { 
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
  { 0,0,0,0,0,0,0 }  // = off
};

void setup() {
  pinMode (POW1, OUTPUT), pinMode (POW2, OUTPUT), pinMode (POW3, OUTPUT);
  for (byte k = 2; k < 10; k++){
  pinMode(k,OUTPUT);
  }
  digitalWrite(9,LOW);
}

void loop() {
  // NURUL ISTIQAMAH
  nurul(0);
  delay(500);
  nurul(9);
  delay(500);
  nurul(10);
  delay(500);
  nurul(0);
  delay(500);
  nurul(6);
  delay(500);
  nurul(10);
  delay(500);
  nurul(2);
  delay(500);
  nurul(0);
  delay(500);
  nurul(0);
  delay(500);
  nurul(1);
  delay(500);
  nurul(10);
  delay(1000);

 // SERLY
  serly(1);
  delay(500);
  serly(3);
  delay(500);
  serly(10);
  delay(500);
  serly(0);
  delay(500);
  serly(5);
  delay(500);
  serly(10);
  delay(500);
  serly(2);
  delay(500);
  serly(0);
  delay(500);
  serly(0);
  delay(500);
  serly(1);
  delay(500);
  serly(10);
  delay(1000);

 // BAHARUDDIN
  bahar(3);
  delay(500);
  bahar(1);
  delay(500);
  bahar(10);
  delay(500);
  bahar(1);
  delay(500);
  bahar(2);
  delay(500);
  bahar(10);
  delay(500);
  bahar(1);
  delay(500);
  bahar(9);
  delay(500);
  bahar(9);
  delay(500);
  bahar(9);
  delay(500);
  bahar(10);
  delay(1000);
}
void nurul(byte baris){
  digitalWrite(POW1, 0);
  digitalWrite(POW2, 1);
  digitalWrite(POW3, 1);
  byte pin = 2;
  for (byte kolom = 0; kolom < 8; ++ kolom){
    digitalWrite(pin,pin_7segmen[baris] [kolom]);
    ++pin;
  }
}

void serly(byte baris){
  digitalWrite(POW1, 1);
  digitalWrite(POW2, 0);
  digitalWrite(POW3, 1);
  byte pin = 2;
  for (byte kolom = 0; kolom < 8; ++ kolom){
    digitalWrite(pin,pin_7segmen[baris] [kolom]);
    ++pin;
  }
}


void bahar(byte baris){
  digitalWrite(POW1, 1);
  digitalWrite(POW2, 1);
  digitalWrite(POW3, 0);
  byte pin = 2;
  for (byte kolom = 0; kolom < 8; ++ kolom){
    digitalWrite(pin,pin_7segmen[baris] [kolom]);
    ++pin;
  }
}
