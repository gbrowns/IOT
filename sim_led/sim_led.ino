//BLINKING LED
//program declaration
void setup(){
 
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
}

//main program

void loop(){

  //turning on the led
  digitalWrite(10, HIGH);
  Serial.print("red ON");
  delay(100);

   digitalWrite(11, HIGH);
  Serial.print("blue ON");
  delay(100);
  
  digitalWrite(12, HIGH);
  Serial.print("green ON");
  delay(100);

  digitalWrite(9, HIGH);
  Serial.print("green ON");
  delay(100);

  //turning off the led
  digitalWrite(10,LOW);
  Serial.print("red  OFF");
  delay(100);

  digitalWrite(11,LOW);
  Serial.print("blue OFF");
  delay(100);

   digitalWrite(12,LOW);
   Serial.print("green OFF");
   delay(100);

   digitalWrite(9,LOW);
   Serial.print("green OFF");
   delay(400);
}
