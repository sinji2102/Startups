void setup() {
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW); 
  delay(1000);
  digitalWrite(7, HIGH);
}

void loop() {
  int i;
  i = 0;
  while(i<5){
    digitalWrite(7, LOW); 
    delay(100);
    digitalWrite(7, HIGH);
    delay(100);
    i = i + 1;
  }
