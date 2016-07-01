const int BTN_PIN = 9; 
const int R_PIN = 10; 
const int G_PIN = 11; 
const int B_PIN = 12; 

int ledMode = 0; 
const int LED_OFF = 0; 
const int LED_R = 1; 
const int LED_G = 2; 
const int LED_B = 3; 
const int MODE_COUNT = 4; 
boolean wasButtonPressed = false; 

void setup() { 
  pinMode(R_PIN, OUTPUT); 
  pinMode(G_PIN, OUTPUT); 
  pinMode(B_PIN, OUTPUT); 
} 

boolean isButtonPressed() { 
  boolean isButtonPressed = digitalRead(BTN_PIN);
  if (!wasButtonPressed && isButtonPressed) {
    delay(10);
    isButtonPressed = digitalRead(BTN_PIN);
    if (isButtonPressed) {
      wasButtonPressed = isButtonPressed;
      return true;
    }
  }
  wasButtonPressed = isButtonPressed;
  return false;
} 

void loop() { 
  if (isButtonPressed()) { 
    ledMode = (ledMode + 1) % MODE_COUNT; 
  } 
  switch (ledMode) { 
    case LED_OFF: 
      digitalWrite(R_PIN, LOW); 
      digitalWrite(G_PIN, LOW); 
      digitalWrite(B_PIN, LOW); 
      break; 
    case LED_R: 
      digitalWrite(R_PIN, HIGH); 
      digitalWrite(G_PIN, LOW); 
      digitalWrite(B_PIN, LOW); 
      break; 
    case LED_G: 
      digitalWrite(R_PIN, LOW); 
      digitalWrite(G_PIN, HIGH); 
      digitalWrite(B_PIN, LOW); 
      break; 
    case LED_B: 
      digitalWrite(R_PIN, LOW); 
      digitalWrite(G_PIN, LOW); 
      digitalWrite(B_PIN, HIGH); 
      break; 
    } 
}

