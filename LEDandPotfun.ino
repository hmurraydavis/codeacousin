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

float photodata(){
	float photodata=analogRead(4);
}

void ledfun(){String getmode(){
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

float photodataf(){
	float photodata=analogRead(4);
}

void twinkle(int led){
	digitalWrite(led, HIGH);
	float time=random(20,100);
	delay(time);
}

void ledfun(float photodata){
	float k=photodata/85;
	k=int(k);

/*	switch (k) {
		case 1:

		case 2:

		case 3:


	}
*/

}

//declare global variables:
int led1=1; //put an led on pin 1
int led2=2; //put an led on pin 2
int led3=3; //put an led on pin 3
int photores=4; //put a photoresistor on pin 4

void setup(){
	Serial.begin(9600);
	for (int lednum=1; lednum<=3; lednum++){
		pinMode (lednum, OUTPUT);
	}
	pinMode(photores, INPUT);
}

void loop(){
	Serial.println("Isaac, what would you like to play with today?");
	Serial.println("LEDs, pots, and motors are good answers.");
	String mode=getmode();
	float photodata=photodataf();
	ledfun(photodata);
}
	
}

//declare global variables:
int led1=1; //put an led on pin 1
int led2=2; //put an led on pin 2
int led3=3; //put an led on pin 3
int photores=4; //put a photoresistor on pin 4

void setup(){
	Serial.begin(9600);
	for (int lednum=1; lednum<=3; lednum++){
		pinMode (lednum, OUTPUT);
	}
	pinMode(photores, INPUT);
}

void loop(){
	Serial.println("Isaac, what would you like to play with today?");
	Serial.println("LEDs, pots, and motors are good answers.");
	String mode=getmode();
	int fab=9;
}
