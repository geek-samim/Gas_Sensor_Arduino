int Led = 12; //LED TO INDICATE NORMAL
int Buzzer = 11; //BUZZER TO INDICATE ACTION NEEDED
int Gassensor = A5; // GAS SENSOR PIN ATTACHED TO A5
int SensorThres = 400;//THRESHOLD VALUE
void setup() {
pinMode(Led, OUTPUT);// LED AS OUTPUT
pinMode(Buzzer, OUTPUT);//BUZZER AS OUTPUT
pinMode(Gassensor, INPUT);// SENSOR AS INPUT
}
void loop() {
int analogSensor = analogRead(Gassensor);
if (analogSensor > SensorThres)//Sensor value exceed threshold limit
{
digitalWrite(Led, LOW);// led will be off
digitalWrite(Buzzer, HIGH);// buzzer will sound
}
else
{
digitalWrite(Led, HIGH);//
digitalWrite(Buzzer, LOW);
}
delay(100);
}
