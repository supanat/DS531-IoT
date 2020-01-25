byte bytesIn;
  void setup() { Serial.begin(9600);
}
void loop() {
if (Serial.available()) {
  bytesIn = Serial.read();
  Serial.write(bytesIn); }
}
