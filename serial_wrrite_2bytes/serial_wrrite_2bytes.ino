int value = 963;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int low = value & 127;
  int high = (value >> 7) & 127;
  int head = 128;
  Serial.write(head);
  Serial.write(high);
  Serial.write(low);
}
