void setup() {
  // put your setup code here, to run once:
  pinMode (01, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, 1);
  delay(5000);
  digitalWrite(1, 0);
  delay(5000);
}
