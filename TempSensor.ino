int TempValue ;
int mPin= A1;

void setup() {
  Serial.begin(9600);

}

void loop() {
  TempValue = analogRead(mPin);
  float TempCel = (TempValue / 1024.0) * 5000;
  float Tcel = TempCel / 10;
  float TempFarh = (Tcel * 9) / 5 + 32;
  Serial.print("Temperature in Celisius is : ");
  Serial.print(Tcel);
  Serial.print("*c");
  Serial.println("--");

  
Serial.print("TEMPRATURE in Faherenheit is: "); // Displaying Temperature in Fahrenheit
  Serial.print(TempFarh);
  Serial.print("*F");
  Serial.println("--");
  delay(1000);
}
