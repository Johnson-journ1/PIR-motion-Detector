int led_pin = 9;
int pir_pin = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(pir_pin, INPUT);
  pinMode(led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool motion_detected = digitalRead(pir_pin);
  if (motion_detected == HIGH) {
    digitalWrite(led_pin, HIGH);
  }else {
    digitalWrite(led_pin, LOW);
  }
  delay(100);
}
