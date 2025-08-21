const int pinoPotenciometro = A0;

void setup() {
	Serial.begin(9600);
  	
  	Serial.println("Monitor Serial Iniciado, Girando o Potenciometro...");
  	Serial.println("---------------------------------------------------");
}

void loop(){
	float valorLido = analogRead(pinoPotenciometro);
  	/*Serial.print("Valor lido no pino A0: ");
  
  	Serial.println((valorLido/1023)*100);
  	Serial.println("%");*/
    Serial.println((valorLido/1023)*100);
    
  	delay(100);
}