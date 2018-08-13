int speakerPin = 3;
int input, output=10;
int i = 0;
int a = 0,b = 0;
double rad=0,rad2=0,sine,x = 0;

void setup() {
  TCCR2B &= B11111000;
  TCCR2B |= B00000001;
  DDRB = 
  Serial.begin(2000000);
  TCCR1B = 0x01;
  Serial.println("start");
}

int NoiseGeat(int in){
  int out;
  out = (in + a + b)/3;
  b = a;
  a = b;
  return out;
}

void loop() {
  ADCSRA=ADCSRA&0xf8; 
  ADCSRA=ADCSRA|0x04;
  input=analogRead(A0);
  x=analogRead(A2);
  rad=(x-600)/600;
  rad2+=0.03;
  sine=(sin(rad2)+1.0)*0.5;
  if(rad >= 0.03){
    output=NoiseGeat(input)*2.0*sine;
  }
  else{
    output=NoiseGeat(input)*1.2;
  }
  Serial.println(input);
  analogWrite(9,input);
}
