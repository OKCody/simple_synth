int freqs[] = {1000, 2000, 3000};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sum = 0;
  for(int i=0; i < 3; i++){
    if(digitalRead(i+2)){  // Skip TX/RX pins by shifting + 2
      sum += freqs[i];
    }
  }
  tone(9, sum, 10);
  // Serial.println(sum);
  delay(50);
}