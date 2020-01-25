const int numPins = 4;
int pins[] = {D1, D2, D5, D6};
void setup() {
 Serial.begin(9600);

 pinMode(pins[0], OUTPUT);
 pinMode(pins[1], OUTPUT);
 pinMode(pins[2], OUTPUT);
 pinMode(pins[3], OUTPUT);
 
}
void loop() {
 while(!Serial.available()); // Do nothing until serial inputis received
    byte num = Serial.read(); // Get num from a serial input
      if (num >='0' && num <='9'){
        num = num - '0'; // convert a character of a number to aninteger
          for (int i=0; i<numPins; i++) {
              byte state = bitRead(num, i); // read a specific bit of anumber
              Serial.print(state);


            digitalWrite(pins[i],state);
           //delay(1000);
           //digitalWrite(pins[i],LOW);
           //delay(1000);
              }
 Serial.println();



           
 }

            
     
}
