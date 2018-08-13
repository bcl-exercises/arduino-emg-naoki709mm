int speakerPin = 9;
int input, output;
float trans = 1.1/1024*255;

void setup() {
  pinMode(speakerPin, OUTPUT);
  Serial.begin(9600);
  analogReference(INTERNAL);
  TCCR1B = 0x01;
}

void loop() {
  input = analogRead(A0);
  output = input*trans;
  analogWrite(speakerPin, output);
}
