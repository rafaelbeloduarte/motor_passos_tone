unsigned int freq = 490;
int pino1 = 8;
int pino2 = 9;
int pino3 = 10;
int pino4 = 11;
unsigned long tempo = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pino1, OUTPUT);
  pinMode(pino2, OUTPUT);
  pinMode(pino3, OUTPUT);
  pinMode(pino4, OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    char op = Serial.read();
    if (op == 'f') {
      freq = Serial.parseInt();
      Serial.println(freq);
      delay(1000);
    }
    if (op == 't') {
      tempo = Serial.parseInt();
      Serial.println(tempo);
      delay(1000);
    }
    break;
  }
//  Serial.print("Frequência: ");
//  Serial.println(freq);
//  Serial.print("tempo: ");
//  Serial.println(tempo);
  tone(pino1, freq);
  delay(tempo);
  noTone(pino1);
  tone(pino2, freq);
  delay(tempo);
  noTone(pino2);
  tone(pino3, freq);
  delay(tempo);
  noTone(pino3);
  tone(pino4, freq);
  delay(tempo);
  noTone(pino4);
}
