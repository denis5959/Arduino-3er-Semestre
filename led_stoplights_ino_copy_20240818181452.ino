

int ledRojo = 2;
int ledAmarillo = 4;
int ledVerde = 7;
int tiempoSemaforo =0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledRojo, OUTPUT);
pinMode(ledVerde, OUTPUT);
pinMode(ledAmarillo, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
if(tiempoSemaforo == 0){
  Serial.println("Puede Avanzar");
digitalWrite(ledRojo,LOW);
  digitalWrite(ledAmarillo,LOW);
  digitalWrite(ledVerde,HIGH);
delay(5000);
 Serial.println("Reduzca su velocidad");
tiempoSemaforo =1;
}
for(tiempoSemaforo == 1;  tiempoSemaforo<=4;){
 
  digitalWrite(ledAmarillo,HIGH);
  digitalWrite(ledVerde,LOW);
delay(500);
  digitalWrite(ledAmarillo,LOW);
delay(500);
tiempoSemaforo++;

}
if(tiempoSemaforo == 5){
  Serial.println("Alto total");
    digitalWrite(ledAmarillo,LOW);
  digitalWrite(ledRojo,HIGH);
delay(10000);
digitalWrite(ledRojo,LOW);

tiempoSemaforo = 0;


}

}
