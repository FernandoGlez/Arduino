int amarillo = 13;
int rojo = 12;
int azul= 11;
int milisegundos = 500;

void setup()
{
pinMode(amarillo,OUTPUT);
pinMode(rojo,OUTPUT);
pinMode(azul,OUTPUT);
}
void loop()
{
digitalWrite(amarillo,HIGH);
digitalWrite(amarillo,LOW);
delay(milisegundos *2);
digitalWrite(rojo,HIGH);
digitalWrite(rojo,LOW);
delay(milisegundos*2);
digitalWrite(azul,HIGH);
digitalWrite(azul,LOW);
delay(milisegundos *2);
}