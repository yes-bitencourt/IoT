float n1,n2,soma,media; //Variáveis para armazenar a nota 1, nota 2, soma e a média do aluno

void setup()

{
  
  Serial.begin(9600); //Inicia o Monitor Serial
  
  pinMode(2,OUTPUT); //Define o pino 2 como saída
  pinMode(3,OUTPUT); //Define o pino 3 como saída
  
}

void loop()

{
  
  n1 = 6.0; //Armazena o valor na variável n1
  n2 = 6.0; //Armazena o valor na váriável n2
  soma = n1 + n2; //Armazena o valor da soma entre as variáveis n1 + n2 na variável soma
  media = soma / 2; //Armazena o valor da divisão entre a variável soma dividido por 2 na variável média
  
  //Exibe no Monitor Serial
  
  Serial.print("A soma das notas e: ");
  Serial.println(soma);
  Serial.print("\n");
  
  Serial.print("A media das notas e: ");
  Serial.println(media);
  Serial.print("\n");
  
  //Faz a comparação da média e exibi no Monitor Serial
  
  if(media >= 7)
  
  {
    
    Serial.println("Parabens, voce foi aprovado!");
    Serial.print("\n");
    digitalWrite(3,HIGH);
    
    }
    
    else if(media >= 5 && media < 7)
    
    {
        Serial.println("Voce esta na recuperacao!");
        Serial.print("\n");
        digitalWrite(4,HIGH);
    }
    
    else
    
    {
        Serial.println("Reprovado!");
        Serial.print("\n");
        digitalWrite(2,HIGH);
    }
    delay(2000); //Espera 2 segundos
 }

