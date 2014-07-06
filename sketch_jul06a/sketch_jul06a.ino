
int led[16];
int etage[16];
int pos = 30;
int i;

void setup(){
  // Init des leds
  for(i=0; i < 16; i++){
    led[i] = pos+i;
    pinMode(led[i], OUTPUT);
  }
  
  // Init des étages
  for(i=16; i < 19; i++){
    etage[i] = pos+i;
    pinMode(etage[i], OUTPUT);
  }
  
}

void loop(){
  animation1();
}

void animation1(){
  for(i=0; i < 16; i++){
    digitalWrite(led[i], HIGH);
  }
  
  for(i=0; i < 16; i++){
    digitalWrite(led[i], HIGH);
    delay(200);
  }

  for(i=0; i < 16; i++){
    digitalWrite(led[i], LOW);
    delay(200);
  }
}
