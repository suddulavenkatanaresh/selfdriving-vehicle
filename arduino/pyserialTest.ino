char c;
int led = 13;
boolean ledLightUp = false;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
// When a user sends serial data then read and execute the following
   if (Serial.available() > 0)
    {
      c = Serial.read(); 
      Serial.println(c);
      if(c == 'y')
      {
        ledLightUp = true;
        Serial.println("LED ON");
      }
      else if(c == 'n')
      {
        ledLightUp = false;
        Serial.println("LED OFF");
      }
    }
  if(ledLightUp){
    digitalWrite(led,HIGH);
  }  
  else{
    digitalWrite(led,LOW);
  }
}
