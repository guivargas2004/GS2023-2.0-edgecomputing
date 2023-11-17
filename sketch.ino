#include <DHT.h>
// Definindo os pinos
#define LED_VERMELHO 23
#define LED_VERDE 22
#define TRIGGER 19
#define ECHO 18

void setup() {
  Serial.begin(115200);
  
  // Inicializando os LEDs como OUTPUT
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

  // Inicializando o sensor ultrassônico
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);

}

void loop() {
  // Lendo o sensor ultrassônico
  float distancia = lerUltrassonico();
  
  // Definindo um limite de capacidade máxima dos hospitais
  float limiteEstoque = 250.0;  // 
  
  if (distancia < limiteEstoque) {
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH);
  } else {
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_VERDE, LOW);
  }
  
  
}

float lerUltrassonico() {
  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER, LOW);
  
  long duracao = pulseIn(ECHO, HIGH);
  float dist = (duracao * 0.0343) / 2;
  return dist;

}
