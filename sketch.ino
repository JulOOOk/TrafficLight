const int ledGreen = 8;
const int ledYellow = 9;
const int ledRed = 10;
const int ledPeopleRed = 11;
const int ledPeopleGreen = 12;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledPeopleRed, OUTPUT);
  pinMode(ledPeopleGreen, OUTPUT);
}

void loop() {
  // красный цвет для пешехода
  digitalWrite(ledPeopleRed, HIGH);
  
  // зеленый цвет для автомобиля
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
  
  // желтый цвет для автомобиля
  digitalWrite(ledYellow, HIGH);
  delay(1000);
  digitalWrite(ledYellow, LOW);
  
  // красный цвет для пешехода
  digitalWrite(ledPeopleRed, LOW);
  
  // красный цвет для автомобиля
  digitalWrite(ledRed, HIGH);
  
  // зеленый цвет для пешехода
  digitalWrite(ledPeopleGreen, HIGH);
  delay(2000);
  digitalWrite(ledPeopleGreen, LOW);
  delay(400);
  for (int i = 0; i < 2; i++){
    digitalWrite(ledPeopleGreen, HIGH);
    delay(400);
    digitalWrite(ledPeopleGreen, LOW);
    if (i<2){
      delay(400);
    }
  }

  // красный цвет для автомобиля
  digitalWrite(ledRed, LOW);
 }
