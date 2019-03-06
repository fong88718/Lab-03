void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  double Analogin;
    for (int i=0;i<=5;i++)
        Analogin = 0.7* Analogin + 0.3* analogRead(A0);

        double Vin = Analogin * 2.5 / 4095;

        Serial.println(Vin);
        delay(500);
}
