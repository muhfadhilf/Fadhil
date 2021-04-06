const int ledPin = 2;

const int ldrPin = A1;

void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <=50) {

digitalWrite(ledPin, HIGH);

Serial.println("LDR tidak menangkap cahaya,LED nyala");

}

else {

digitalWrite(ledPin, LOW);

Serial.println("LDR menangkap cahaya, LED mati");

}

}
