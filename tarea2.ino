void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  float v;
  v=analogRead(A0);
float voltaje = v*(5.0/1023.0);
float t= voltaje/.0666667;
Serial.print("Temperatura = ");
Serial.print(t);
Serial.println(" C");
delay(500);
}
