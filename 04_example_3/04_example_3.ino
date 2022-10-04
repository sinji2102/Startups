#define PIN_LED 13
unsigned int count, toggle;

int toggle_state(int toggle) {
  return toggle;
}

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}
  
void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  toggle_state(toggle);
}
