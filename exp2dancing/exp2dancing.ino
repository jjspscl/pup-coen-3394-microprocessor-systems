int led = 13;
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;
int led7 = 6;

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
void loop() 
{
  digitalWrite(led3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  Serial.println("BLUE");
  digitalWrite(led3, LOW);    // turn the LED off by making the voltage LOW
  delay(300); 
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led5, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

  digitalWrite(led7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led7, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

  digitalWrite(led6, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(led6, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

  digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second 
}

