int led = 13;
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;
int led7 = 6;

// the setup routine runs once when you press reset:
void setup() 
{                
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);  
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);  
  pinMode(led4, OUTPUT);  
  pinMode(led5, OUTPUT);  
  pinMode(led6, OUTPUT);  
  pinMode(led7, OUTPUT);  
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("BLUE");
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second

  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("YELLOW");
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second

  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("ORANGE");
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second

  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("GREEN");
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second

  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("RED");
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second

  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("BLUE");
  digitalWrite(led5, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second

  digitalWrite(led6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("YELLOW");
  digitalWrite(led6, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second

  digitalWrite(led7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
   Serial.println("ORANGE");
  digitalWrite(led7, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
}

