void setup() {
  // put your setup code here, to run once:
      Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:    
    double Analogin,sensorValue,sensorVoltage,ResisterValue;   
    int R1,R2;
        
    for (int i=0;i<=5;i++)
    {
      sensorValue = 0.7* sensorValue + 0.3* analogRead(A0);
      Serial.print(i);
      Serial.print(":");
      Serial.println(analogRead(A0));
      }
        
    sensorVoltage = sensorValue *2.5 / 4095;
    R1 = sensorVoltage * 11000 / 2.5;

    Serial.println(sensorVoltage);
    Serial.println(sensorValue);
    Serial.println(R1);
    delay(1000);
}
