void setup() {

  pinMode(13, OUTPUT); //Pin de salida
}

void loop() {
  //parpadeo del led
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW); //led apagado
  delay(1000);
}
