

int trigPin = 50;
int echoPin = 51;

int trigPin2 = 48;
int echoPin2 = 49;

int trigPin3 = 30;
int echoPin3 = 31;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  
}

void loop() {
  int duration, distance;
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);
  duration = pulseIn (echoPin, HIGH);
  distance = (duration/2) / 29.1;

      Serial.print(distance);  
      Serial.print("cm");
      Serial.println();

  

    int duration2, distance2;
    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration = pulseIn (echoPin2, HIGH);
    distance2 = (duration/2) / 29.1;
   
      Serial.print(distance2);  
      Serial.print("cm");
      Serial.println();
   

    int duration3, distance3;
    digitalWrite (trigPin3, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin3, LOW);
    duration = pulseIn (echoPin3, HIGH);
    distance3 = (duration/2) / 29.1;
   
      Serial.print(distance3);  
      Serial.print("cm");
      Serial.println();
   
    

  }
