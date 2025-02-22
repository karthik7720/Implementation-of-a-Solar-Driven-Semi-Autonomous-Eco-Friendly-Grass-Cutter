#include <Servo.h>
#define in1 7
#define in2 6
#define in3 5
#define in4 4
#define blade 3
#define buzz 12
#define Echo A1
#define Trig A0
#define motor 8
#define Speed 170
#define spoint 103

int Left;
int Right;
int L = 0;
int R = 0;
int L1 = 0;
int R1 = 0;
const int DIN = 2;
int value;
Servo servo;

void setup() {
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(blade, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(DIN, INPUT);
  servo.attach(motor);
}

void loop() {

  value = digitalRead(DIN);
  if (value == HIGH){
    Bluetoothcontrol();
    }
  else if(value == LOW){
    Obstacle();
    }
  }

void Bluetoothcontrol() {
  if (Serial.available() > 0) {
    char inputvalue = char(Serial.read());
    if (inputvalue == 'F') {
      forward();
    }
    else if (inputvalue == 'B') {
      backward();
    }

    else if (inputvalue == 'R') {
      right();
    }

    else if (inputvalue == 'L') {
      left();
    }
    else if (inputvalue == 'S') {
      Stop();
    }
    if (inputvalue == 'o'){
      digitalWrite(blade, HIGH);
      }
      if (inputvalue == 'f'){
      digitalWrite(blade, LOW);
      }

    }
}


void Obstacle() {
  int distance = ultrasonic();
  if (distance <= 12) {
    digitalWrite(buzz,HIGH);
    digitalWrite(blade,LOW);
    Stop();
    backward();
    delay(100);
    Stop();
    L = leftsee();
    servo.write(spoint);
    delay(800);
    R = rightsee();
    servo.write(spoint);
    if (L < R) {
      right();
      delay(500);
      Stop();
      delay(200);
    } else if (L > R) {
      left();
      delay(500);
      Stop();
      delay(200);
    }
  } else {
    forward();
    digitalWrite(blade,HIGH);
    digitalWrite(buzz,LOW);
  }

}
int ultrasonic() {
  digitalWrite(Trig, LOW);
  delayMicroseconds(4);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  long t = pulseIn(Echo, HIGH);
  long cm = t / 29 / 2; //time convert distance
  return cm;
}

void forward() {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
}
void backward() {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
}
void right() {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
}
void left() {

      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
}
void Stop() {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
}
int rightsee() {
  servo.write(20);
  delay(800);
  Left = ultrasonic();
  return Left;
}

int leftsee() {
  servo.write(180);
  delay(800);
  Right = ultrasonic();
  return Right;
}
