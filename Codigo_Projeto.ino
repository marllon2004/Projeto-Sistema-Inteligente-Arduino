/*
 * SISTEMA DE IRRIGAÇÃO INTELIGENTE PARA PLANTAS CASEIRAS
 * Sensor de umidade do solo A0: Pino A0
 * Módulo Relé (Válvula): Pino 10
 * by Bruno Raspante, Fernando Carreira e Marllon Araujo
 */
 
//Variáveis
const int sensorSolo = A0;
const int valvulaSolenoide = 10;
const int soloSeco = 60;
const int tempoRega = 5; // Tempo de rega em segundos
int umidadeSolo = 0;

void setup() {
  
  pinMode(valvulaSolenoide, OUTPUT); // Desliga a válvula solenóide
  
  digitalWrite(valvulaSolenoide, HIGH);
                                                                                           
  Serial.print("Rega Automatica ;");
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i < 5; i++) {                                                                
      Serial.print("Umidade: ");
      umidadeSolo = analogRead(sensorSolo); // Faz a leitura do sensor de umidade do solo
      umidadeSolo = map(umidadeSolo, 1023, 0, 0, 100); // Converte a variação do sensor de 0 a 1023 para 0 a 100
      
      Serial.print(umidadeSolo);
      Serial.print(" %   ");
      delay(1000); // Espera um segundo
  }
  
    if(umidadeSolo < soloSeco) {
      Serial.print("   Regando     ");
      digitalWrite(valvulaSolenoide, LOW); // Liga a válvula solenóide
      delay(tempoRega*1000); //Rega durante esse tempo
      digitalWrite(valvulaSolenoide, HIGH);
   }
    else {
      Serial.print("Solo Encharcado ");
      delay(3000); // Verifica a cada esse tempo
   }
}
