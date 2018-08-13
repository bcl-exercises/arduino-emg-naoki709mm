int input;
int speakerPin=9;
void setup() {
  Serial.begin(9600);
}

void loop() {
    input = analogRead(A0);
    Serial.println(input);
}
