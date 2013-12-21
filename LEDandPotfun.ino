String getmode(){
	String content = "";
	char character;

	while(Serial.available()) {
	  character = Serial.read();
	  content.concat(character);
	}

	if (content != "") {
	Serial.println(content);
	}

	return content;
}


void setup(){
	Serial.begin(9600);
}

void loop(){
	Serial.println("Isaac, what would you like to play with today?");
	Serial.println("LEDs, pots, and motors are good answers.");
	String mode=getmode();
	int fab=9;
}
