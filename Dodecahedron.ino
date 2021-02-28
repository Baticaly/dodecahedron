
//    0  0  0  0  0   0  0  0
//    5  6  7  8  12  11 10 9

#include "dictionary.h"
#include "byteDisplay.h"


void setup() {

  Serial.begin(9600);

  for(int i=5; i<13; i++){
    pinMode(i, OUTPUT);
  }

}

void loop() {

  byteDisplay(5);
    
}

  
/*
    String binaryDictionary[10];
    char bufferDemo[6];
    String demoContent[] = {"OSWET"}; 
    
    demoContent[0].toCharArray(bufferDemo, 6);
    
    for(int i; i<= 7; i++){
      String buffer = String(bufferDemo[i], BIN);
      if(buffer.length() == 7) { buffer = "0" + buffer; }
  
      binaryDictionary[i] = buffer; 
    }


    for(int i; i<= 7; i++){
      if(binaryDictionary[0].charAt(i) == '1'){ digitalWrite(l[i],HIGH); }
    }
*/
