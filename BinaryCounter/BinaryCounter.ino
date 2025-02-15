int one = 11;
int two = 10;
int three = 9;
int four = 6;
int del = 1000;


void setup() {
pinMode(one, OUTPUT);
pinMode(two, OUTPUT);
pinMode(three, OUTPUT);
pinMode(four, OUTPUT);
}

void loop() {
digitalWrite(one, HIGH);
digitalWrite(two, LOW);
digitalWrite(three, LOW);
digitalWrite(four, LOW);
delay(del);

digitalWrite(one, LOW);
digitalWrite(two, HIGH);
digitalWrite(three, LOW);
digitalWrite(four, LOW);
delay(del);

digitalWrite(one, HIGH);
digitalWrite(two, HIGH);
digitalWrite(three, LOW);
digitalWrite(four, LOW);

delay(del);

digitalWrite(one, LOW);
digitalWrite(two, LOW);
digitalWrite(three, HIGH);
digitalWrite(four, LOW);

delay(del);

digitalWrite(one, HIGH);
digitalWrite(two, LOW);
digitalWrite(three, HIGH);
digitalWrite(four, LOW);

delay(del);

digitalWrite(one, LOW);
digitalWrite(two, HIGH);
digitalWrite(three, HIGH);
digitalWrite(four, LOW);

delay(del);

digitalWrite(one, HIGH);
digitalWrite(two, HIGH);
digitalWrite(three, HIGH);
digitalWrite(four, LOW);

delay(del);

digitalWrite(one, LOW);
digitalWrite(two, LOW);
digitalWrite(three, LOW);
digitalWrite(four, HIGH);

delay(del);

digitalWrite(one, HIGH);
digitalWrite(two, LOW);
digitalWrite(three, LOW);
digitalWrite(four, HIGH);

delay(del);

digitalWrite(one, LOW);
digitalWrite(two, HIGH);
digitalWrite(three, LOW);
digitalWrite(four, HIGH);

delay(del);

digitalWrite(one, HIGH);
digitalWrite(two, HIGH);
digitalWrite(three, LOW);
digitalWrite(four, HIGH);

delay(del);

digitalWrite(one, LOW);
digitalWrite(two, LOW);
digitalWrite(three, HIGH);
digitalWrite(four, HIGH);

delay(del);

digitalWrite(one, HIGH);
digitalWrite(two, LOW);
digitalWrite(three, HIGH);
digitalWrite(four, HIGH);

delay(del);

digitalWrite(one, HIGH);
digitalWrite(two, HIGH);
digitalWrite(three, HIGH);
digitalWrite(four, HIGH);

delay(del);

digitalWrite(one, LOW);
digitalWrite(two, LOW);
digitalWrite(three, LOW);
digitalWrite(four, LOW);

delay(2000);


}
