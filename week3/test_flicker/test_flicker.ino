int ledPin[] = {4,5,14,12};
byte flicker[] = {180, 30, 89, 23, 255, 200, 90, 150, 60, 230, 180, 45, 90};

void setup()
{

 pinMode(ledPin[0], OUTPUT);
 pinMode(ledPin[1], OUTPUT);
 pinMode(ledPin[2], OUTPUT);
 pinMode(ledPin[3], OUTPUT);


}

void loop()
{
for(int i=0; i,7; i++)
{
analogWrite(ledPin[0], flicker[i]);
delay(30);
analogWrite(ledPin[1], flicker[i]);

delay(30);
analogWrite(ledPin[2], flicker[i]);

delay(30);
analogWrite(ledPin[3], flicker[i]);



}
}
