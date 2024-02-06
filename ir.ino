#include <IRremote.h>

int receiverPin = 9;
//int ledPin = 12;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(receiverPin, true); 
//  pinMode(ledPin, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if (IrReceiver.decode()) {

//    if (int code == NULL) {
//      int code = IrReceiver.decodedIRData.decodedRawData;
//    }
    

    IrReceiver.printIRResultShort(&Serial);
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
//    int value = IrReceiver.decodedIRData.decodedRawData;
//    Serial.println(value);
    
//    Serial.println(IrReceiver.decodedIRData.decodedRawData);
//    digitalWrite(ledPin, HIGH);


    if (IrReceiver.decodedIRData.decodedRawData == 0xB847FF00) {
      digitalWrite(2, HIGH);
      Serial.println("2 ON!!!");
      delay(200);
      digitalWrite(2, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xBC43FF00) {
      digitalWrite(3, HIGH);
      Serial.println("3 ON!!!");
      delay(200);
      digitalWrite(3, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xEA15FF00) {
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(4, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xBB44FF00) {
      digitalWrite(5, HIGH);
      delay(200);
      digitalWrite(5, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xBF40FF00) {
      digitalWrite(6, HIGH);
      delay(200);
      digitalWrite(6, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xF807FF00) {
      digitalWrite(7, HIGH);
      delay(200);
      digitalWrite(7, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xF30CFF00) {
      digitalWrite(8, HIGH);
      delay(200);
      digitalWrite(8, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xF708FF00) {
      digitalWrite(10, HIGH);
      delay(200);
      digitalWrite(10, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xE718FF00) {
      digitalWrite(11, HIGH);
      delay(200);
      digitalWrite(11, LOW);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xE31CFF00) {
      digitalWrite(12, HIGH);
      delay(200);
      digitalWrite(12, LOW);
    }

//    if (int code == IrReceiver.decodedIRData.decodedRawData) {
      IrReceiver.resume();
//    }
    
    delay(100);
  }
}
