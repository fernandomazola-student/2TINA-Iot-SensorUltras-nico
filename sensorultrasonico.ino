const int ECH0 = 7;//Recebe pulso
const int TRIG = 8;//Envia o pulso

long duracao = 0;
long distancia = 0;

void setup() {
Serial.begin(9600);
pinMode(ECH0, INPUT);
pinMode(TRIG, OUTPUT);
}

void loop() {
 digitalWrite(TRIG, LOW);
 delayMicroseconds(10);
 digitalWrite(TRIG, HIGH);
 delayMicroseconds(10);
 digitalWrite(TRIG, LOW);

 duracao = pulseIn(ECHO, HIGH); //Tempo que o pino ECH0 ficou high

 distancia = duracao / 50; //Distancia em cm

 Serial.print("Distancia em cm:");
 Serial.println(distancia);
 delay(100);
}
