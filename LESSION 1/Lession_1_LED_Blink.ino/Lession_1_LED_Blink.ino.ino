/*

  Урок 1. Мигаем Светодиодом.

*/
void setup() {
  // инициализируем 13 ПИН как ВЫХОД
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // подаем ток на 13 ПИН
  delay(1000);              // ждем 1000 миллисекунд
  digitalWrite(13, LOW);    // перестаем подавать ток на 13 ПИН
  delay(1000);              // ждем 1000 миллисекунд

}