int ledPinRed = 12;
int ledPinYellow = 11;
int ledPinGreen = 10;

void setup()
{
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
}

void loop()
{
  digitalWrite(ledPinRed, HIGH); // Ligar o led Vermelho
  delay(200); // Esperar 200 milisegundos
  digitalWrite(ledPinYellow, HIGH); // Ligar o led Amarelo
  delay(200);
  digitalWrite(ledPinGreen, HIGH); // Ligar o led Verde
  delay(200);
  
  
  digitalWrite(ledPinRed, LOW); // Desigar o led Vermelho
  delay(200);
  digitalWrite(ledPinYellow, LOW);// Desigar o led Amarelo
  delay(200);
  digitalWrite(ledPinGreen, LOW);// Desigar o led Verde
  delay(200);
}