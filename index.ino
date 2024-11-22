int flexsensor1 = A0; 
int flexsensor2 = A1; 
int flexsensor3 = A2; 
int flexsensor4 = A3; 
int flexsensor5 = A4; 
 
void setup() 
{ 
  Serial.begin(9600);
  pinMode(flexsensor1, INPUT);
  pinMode(flexsensor2, INPUT);
  pinMode(flexsensor3, INPUT);
  pinMode(flexsensor4, INPUT);
  pinMode(flexsensor5, INPUT);
} 
 
void loop() 
{ 
  int value1;
  int value2;
  int value3;
  int value4;
  int value5;
  value1 = analogRead(flexsensor1);
  value2 = analogRead(flexsensor2);
  value3 = analogRead(flexsensor3);
  value4 = analogRead(flexsensor4);
  value5 = analogRead(flexsensor5);
  if(value1 < 2){
    Serial.println("Bended 1");
  }
  if(value2 < 2){
    Serial.println("Bended 2");
  }
  if(value3 < 2){
    Serial.println("Bended 3");
  }
  if(value4 < 2){
    Serial.println("Bended 4");
  }
  if(value5 < 2){
    Serial.println("Bended 5");
  }
  delay(20);
}
