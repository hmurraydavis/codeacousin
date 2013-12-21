String getdata(){
	if (Serial.available() > 0) {
		int incomingByte = Serial.read();
		Serial.print("I received: ");
        Serial.println(incomingByte);
    }
    return "Cat";
}


void setup(){
	Serial.begin(9600);
}

void loop(){
	int fab=9;
}
