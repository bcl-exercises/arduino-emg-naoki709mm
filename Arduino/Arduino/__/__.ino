int value=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("start");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<5;i++){
    value=analogRead(0);
  }
  Serial.println(value/5) ;
}
