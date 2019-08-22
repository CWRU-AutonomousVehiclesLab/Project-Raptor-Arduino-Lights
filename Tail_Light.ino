#define leftTop 11
#define leftBottom 10
#define rightTop 8
#define rightBottom 9
void setup() {
  // put your setup code here, to run once:
  pinMode(leftTop, OUTPUT);
  pinMode(leftBottom, OUTPUT);
  pinMode(rightTop, OUTPUT);
  pinMode(rightBottom, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i  = 0; i <20; i++){
      digitalWrite(leftTop, HIGH);
      digitalWrite(rightBottom, HIGH);
      digitalWrite(leftBottom, LOW);
      digitalWrite(rightTop, LOW);
      delay(250);
      digitalWrite(leftTop, LOW);
      digitalWrite(rightBottom, LOW);
      digitalWrite(leftBottom, HIGH);
      digitalWrite(rightTop, HIGH);
      delay(250);
  }
    for (int i  = 0; i <5; i++){
      digitalWrite(leftTop, HIGH);
      digitalWrite(rightBottom, HIGH);
      digitalWrite(leftBottom, HIGH);
      digitalWrite(rightTop, HIGH);
      delay(250);
      digitalWrite(leftTop, LOW);
      digitalWrite(rightBottom, LOW);
      digitalWrite(leftBottom, LOW);
      digitalWrite(rightTop, LOW);
      delay(250);
  }
}
