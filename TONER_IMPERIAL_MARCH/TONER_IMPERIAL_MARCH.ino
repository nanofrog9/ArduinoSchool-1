#define COUNT_NOTES 39

int frequences[39] = {
    392, 392, 392, 311, 466, 392, 311, 466, 392,
    587, 587, 587, 622, 466, 369, 311, 466, 392,
    784, 392, 392, 784, 739, 698, 659, 622, 659,
    415, 554, 523, 493, 466, 440, 466,
    311, 369, 311, 466, 392 };

//длительность нот
int durations[39] = {
    350, 350, 350, 250, 100, 350, 250, 100, 700,
    350, 350, 350, 250, 100, 350, 250, 100, 700,
    350, 250, 100, 350, 250, 100, 100, 100, 450,
    150, 350, 250, 100, 100, 100, 450,
    150, 350, 250, 100, 750 };

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 39; i++)
    {
       tone(3, frequences[i], durations[i]);
       delay(durations[i] * 1.5);
       
    }
}
