
int led[] = {5,6,7,8,12,11,10,9};

String binaryDictionary[] = {"01001111", "01010011", "01010111", "01000101", "01010100"};
char bufferDemo[7];
int length;

/*
void byteDivide(int input) {

    dictionaryContent[input].toCharArray(bufferDemo, dictionaryContent[input].length());      //bufferDemo[] = { "O", "S", ...}
    length = dictionaryContent[input].length();

    for(int i; i<= 7; i++){
      String buffer = String(bufferDemo[i], BIN);
      if(buffer.length() == 7) { buffer = "0" + buffer; }
  
      binaryDictionary[i] = buffer;                                                            //binaryDictionary[] = { "01001111", "01010011", ...}
      Serial.println(binaryDictionary[i]);
    }

}
*/

void byteShow(int l){
    Serial.println(binaryDictionary[l]);
    delay(1000);
    for(int i; i<= 7; i++){
        if(binaryDictionary[l].charAt(i) == '1'){ 
            digitalWrite(led[i], HIGH); 
        }
        else {
            digitalWrite(led[i], LOW);
        }
        delay(100);
    }
    delay(500);

}

void byteDisplay(int lengthInput) {

    for(int l; l<= 5; l++){
        byteShow(l);
        delay(500);
    }
}
