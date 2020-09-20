int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int conds = 0;
void setup() 
{                
  pinMode(led1, OUTPUT); //1
  pinMode(led2, OUTPUT);  //2
  pinMode(led3, OUTPUT);  //4
  pinMode(led4, OUTPUT);  //8
  pinMode(led5, OUTPUT);  //16
  pinMode(led6, OUTPUT);  //32
  pinMode(led7, OUTPUT);  //64
  pinMode(led8, OUTPUT);  //128
  Serial.begin(9600); 
}

void loop() {
  while(Serial.available() == 0){}
  conds = Serial.parseInt();
  Serial.println(conds);

  if( conds > 0 && conds <= 255) {
    digitalWrite(led1, (conds & B00000001));
    digitalWrite(led2, (conds & B00000010));
    digitalWrite(led3, (conds & B00000100));
    digitalWrite(led4, (conds & B00001000));
    digitalWrite(led5, (conds & B00010000));
    digitalWrite(led6, (conds & B00100000));
    digitalWrite(led7, (conds & B01000000));
    digitalWrite(led8, (conds & B10000000));
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    delay(500);
  }
 Serial.print("Input Decimal Number: ");
}
    
