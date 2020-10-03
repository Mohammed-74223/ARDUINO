
int button=13;
int sensors=12;
int buttonstate=LOW;
int count=0;

void setup()
{
  pinMode(13, INPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop()
{   
    
    int light1=analogRead(A0);
    int light1trans=map(light1,0,1023,0,100);
    int light2=analogRead(A1);
    int light2trans=map(light2,0,1023,0,255);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    if (digitalRead(13)==HIGH && buttonstate==LOW){
     Serial.println("Button is open");
    for(int num=0;num<100; num++)  {
      int light1=analogRead(A0);
    int light1trans=map(light1,0,1023,0,100);
    int light2=analogRead(A1);
    int light2trans=map(light2,0,1023,0,255);
    Serial.print("LIGHT SENSOR READS ");
    Serial.println(light1trans);
    delay(500);
    if (light1trans==0){
      Serial.print("Sensor1 is ");
      Serial.println(light1trans);
      /*for (int i=0; i<90; i+=15){
        servo1.write(i);
        delay(5)
        }*/delay(1500);
      if (light2trans=0 || light2trans<5){
        delay(30);
        count++;
        Serial.print("count is ");
        Serial.println(count);
        delay(1000);
       
      }
      }
    else if (light1trans<10){
        delay(10);
        if (light2trans==0){
          if (count>0){count--;
            Serial.print("count is ");
            Serial.println(count);
            delay(100);}
          else if (count==0){
            Serial.println("THE ROOM IS EMPTY");
            delay(500);
          }
      }
}
 if(count >=5){
       for(int i=0; i< 10; i+=2){
            digitalWrite(7,HIGH);
            digitalWrite(6,HIGH);
            delay(200);
            digitalWrite(7,LOW);
            digitalWrite(6,LOW);
          }}
     delay(2000);
     buttonstate=HIGH;}}
     else if(digitalRead(13)==HIGH && buttonstate==HIGH){
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      buttonstate=LOW;
      }
     
     }
     
