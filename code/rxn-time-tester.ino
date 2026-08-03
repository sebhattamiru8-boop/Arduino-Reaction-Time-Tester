const int greenLED = 8;
const int redLED = 9;
const int button = 2;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(button, INPUT_PULLUP);

  Serial.begin(9600);

  // Creates a random seed
  randomSeed(analogRead(A0));

  Serial.println("Reaction Time Tester");
  Serial.println("Wait for the Green light.");
  Serial.println("Don't press too early!");
  Serial.println();
}

void loop() {

  // Turn LEDs off
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
  Serial.println("Get Ready...");

  // Random wait between 2 and 5 seconds
  int waitTime = random(2000, 5000);

  for (int i = 0; i < waitTime; i += 10) {

    // Check for false start
    if (digitalRead(button) == LOW) {

      Serial.println("FALSE START!");
      digitalWrite(redLED, HIGH);
      delay(2000);
      digitalWrite(redLED, LOW);

      // Wait until button is released
      while (digitalRead(button) == LOW) {
      }

      delay(500);
      Serial.println();
      return;
    }

    delay(10);
  }

  // Turn on green LED
  digitalWrite(greenLED, HIGH);

  Serial.println("GO!");

  unsigned long startTime = millis();

  // Wait until button is pressed
  while (digitalRead(button) == HIGH) {
  }

  unsigned long reactionTime = millis() - startTime;

  digitalWrite(greenLED, LOW);

  Serial.print("Reaction Time: ");
  Serial.print(reactionTime);
  Serial.println(" ms");

  // Wait until button is released
  while (digitalRead(button) == LOW) {
  }

  delay(3000);

  Serial.println();
}
