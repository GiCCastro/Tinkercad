// C++ code
//
int pin_led = 2;
int pin_pot = A0;
int valor_pot = 0;


void setup()
{
  pinMode(pin_led, OUTPUT);
  pinMode(pin_pot, INPUT);
  Serial.begin(9600);
}

void loop()
{       
 valor_pot = analogRead(pin_pot);
  Serial.println(valor_pot);  
  if(valor_pot >= 512){
   digitalWrite(pin_led, HIGH);  
}
  else{
    digitalWrite(pin_led, LOW);
}
 
}