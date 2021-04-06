
int Yellow = 4;
int Green = 3;
int Red = 2;


int yellow = 13;
int green = 12;
int red = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Red, OUTPUT);

  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Red and green (bright)
  digitalWrite(Red, 1); // LED Bright
  digitalWrite(green, 1); // LED Bright
  delay(1500);  // for simulation ( time delay is low than use real arduino)
  // real arduino (delay time 1000 = 1 second)

  // Red and yellow (bright)
  digitalWrite(Red, 1); // LED Bright
  digitalWrite(green, 0); // LED Dark
  digitalWrite(yellow, 1); // LED Bright
  delay(1000);  // for simulation ( time delay is low than use real arduino)
  // real arduino (delay time 1000 = 1 second)

  // Green and red (bright)
  digitalWrite(Red, 0); // LED Dark
  digitalWrite(Green, 1); // LED Bright
  digitalWrite(yellow, 0); // LED Dark
  digitalWrite(red, 1); // LED Bright
  delay(1500);  // for simulation ( time delay is low than use real arduino)
  // real arduino (delay time 1000 = 1 second)

  // Yellow and red (bright)
  digitalWrite(Red, 0); // LED Dark
  digitalWrite(Green, 0); // LED Dark
  digitalWrite(Yellow, 1); // LED Bright
  digitalWrite(red, 1); // LED Bright
  delay(1000);  // for simulation ( time delay is low than use real arduino)
  // real arduino (delay time 1000 = 1 second)

  digitalWrite(Yellow, 0); // LED Dark
  digitalWrite(red, 0); // LED Darl

}
