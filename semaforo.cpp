const int verde = A1;
const int amarillo = A2;
const int rojo = A3;

void setup() {
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop() {
  // 1. Verde encendido por 3 segundos
  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(verde, LOW);

  // 2. Parpadeo del LED amarillo (3 veces)
  // Parpadeo 1
  digitalWrite(amarillo, HIGH);
  delay(400); // Enciende 0.4 segundos
  digitalWrite(amarillo, LOW);
  delay(400); // Apaga 0.4 segundos

  // Parpadeo 2
  digitalWrite(amarillo, HIGH);
  delay(400);
  digitalWrite(amarillo, LOW);
  delay(400);

  // Parpadeo 3
  digitalWrite(amarillo, HIGH);
  delay(400);
  digitalWrite(amarillo, LOW);
  delay(400); // Breve pausa antes del rojo

  // 3. Rojo encendido por 3 segundos
  digitalWrite(rojo, HIGH);
  delay(3000);
  digitalWrite(rojo, LOW);
}