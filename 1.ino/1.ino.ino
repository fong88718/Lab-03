void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  Serial.println("HelloWorld!");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char val = Serial.read();
    if(val == '1')
    {
        digitalWrite(9,HIGH);
        Serial.println("LED ON");
        delay(500);
      }
      else if(val == '0');
      {
        digitalWrite(9,LOW);
        Serial.println("LED OFF");
         delay(500);
        }
    }
}
