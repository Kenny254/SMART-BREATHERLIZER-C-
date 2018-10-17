/*
CONNECTION
ARDUINO -MQ3/BUZZER
AO - AOUT
D8 -DOUT
D13 -BUZZER ANODE
*/

const int AOUTpin=0;//the AOUT pin of the alcohol sensor goes into analog pin A0 of the arduino
const int DOUTpin=8;//the DOUT pin of the alcohol sensor goes into digital pin D8 of the arduino
const int ledPin=13;//the anode of the LED connects to digital pin D13 of the arduino

int limit;
int value;

void setup() {
Serial.begin(9600);
pinMode(DOUTpin, INPUT);//sets the pin as an input to the arduino
pinMode(ledPin, OUTPUT);//sets the pin as an output of the arduino
}

void loop()
{
value= analogRead(AOUTpin);//reads the analaog value from the alcohol sensor's AOUT pin
  Serial.println(value);
 if(value<200)
  {
      Serial.println("You are sober.");
  }
  if (value>=200 && value<280)
  {
      Serial.println("Alcohol detected");
      digitalWrite(13,HIGH);
      delay(5000);
       digitalWrite(13,LOW);
  }
 

  delay (500);
}
