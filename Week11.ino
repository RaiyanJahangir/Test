#define temp A0
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Serial Communication Testing");
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp_=analogRead(temp);
  Serial.println(temp_);
  delay(1000);
}
