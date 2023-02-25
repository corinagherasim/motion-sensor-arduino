int led = 13;                // pin-ul de unde este atasat LED-ul
int sensor = 2;              // pin-ul de unde este atasat senzorul
int val = 0;                 // variabila care arata starea senzorului 

void setup() {
  pinMode(led, OUTPUT);      // initializarea LED-ului ca output
  pinMode(sensor, INPUT);    // initializarea senzorului ca input
}

void loop(){
  val = digitalRead(sensor);   // se citeste valoarea senzorului
  if (val == HIGH) {           // verifica daca senzorul e HIGH (daca e miscare)
    digitalWrite(led, HIGH);   // aprinde LED-ul
    delay(100);                // delay 100 millisecunde 
  } 
  else {
      digitalWrite(led, LOW); // stinge LED-ul
      delay(200);             // delay 200 millisecunde
    }
  }