#include <IRremote.h>

const int RECV_PIN = 6;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int mot1 = 2;
const int mot2 = 3;
const int mot3 = 4;
const int mot4 = 5;

void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(mot1,OUTPUT);
  pinMode(mot2,OUTPUT);
  pinMode(mot3,OUTPUT);
  pinMode(mot4,OUTPUT);
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){
          case 0xE0E006F9: //Keypad button "5"
          digitalWrite(mot1,HIGH);
          digitalWrite(mot2,LOW);
          digitalWrite(mot3,HIGH);
          digitalWrite(mot4,LOW);
          }

        switch(results.value){
          case 0xE0E08679: //Keypad button "2"
          digitalWrite(mot1,LOW);
          digitalWrite(mot2,HIGH);
          digitalWrite(mot3,LOW);
          digitalWrite(mot4,HIGH);
          }
 switch(results.value){
          case 0xE0E046B9: //Keypad button "2"
          digitalWrite(mot1,LOW);
          digitalWrite(mot2,LOW);
          digitalWrite(mot3,HIGH);
          digitalWrite(mot4,LOW);
          }
           switch(results.value){
          case 0xE0E0A659: //Keypad button "2"
          digitalWrite(mot1,HIGH);
          digitalWrite(mot2,LOW);
          digitalWrite(mot3,HIGH);
          digitalWrite(mot4,HIGH);
          }
           switch(results.value){
          case 0xE0E016E9: //Keypad button "2"
          digitalWrite(mot1,LOW);
          digitalWrite(mot2,LOW);
          digitalWrite(mot3,LOW);
          digitalWrite(mot4,LOW);
          }
        irrecv.resume(); 
    }
}

