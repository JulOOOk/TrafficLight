const int ledGreen = 8;
const int ledYellow = 9;
const int ledRed = 10;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  // зеленый цвет
  digitalWrite(ledGreen, HIGH);
  delay(3000);
  digitalWrite(ledGreen, LOW);
  delay(400);
  for (int i = 0; i<=2; i++){
    digitalWrite(ledGreen, HIGH);
    delay(400);
    digitalWrite(ledGreen, LOW);
    if (i<2){
      delay(400);
    } 
  }
  
  // желтый цвет
  digitalWrite(ledYellow, HIGH);
  delay(1000);
  digitalWrite(ledYellow, LOW);

  // красный цвет
  digitalWrite(ledRed, HIGH);
  delay(2000);
  digitalWrite(ledRed, LOW);
}
