int value = 0;
bool isValid = false;

void setup(){
  Serial.begin(9600);
}

void loop(){
  isValid = false;
  if (Serial.available() >= 3) {
    int head = Serial.read();
    if (head == 128) {
      int high = Serial.read();
      int low  = Serial.read();
      value = (high<<7) + low;
      Serial.println(value, DEC);
      if (0 <= value <= 1023) {
        isValid = true;
      }
    }
  }
}
