void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int estadoBoton = digitalRead(2); //leer el voltaje si hay 0 o 5 voltios
  if (estadoBoton==1){
    delay(1000);
    digitalWrite(13, HIGH);

  }else{
    delay(1000);
    digitalWrite(13, LOW);
  }

}
