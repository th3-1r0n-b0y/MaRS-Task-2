// C++ code
//
const int enA = 3;
const int inp1 =2;
const int inp2 =4;

const int enB = 6;
const int inp3 =5;
const int inp4 =7;

void setup()
{
  Serial.begin(9600);
  pinMode(enA,OUTPUT);
  pinMode(inp1,OUTPUT);
  pinMode(inp2,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(inp3,OUTPUT);
  pinMode(inp4,OUTPUT);
}

void loop()
{
  if (Serial.available()>0){
    char a = Serial.read();
    if (a=='W'){
      digitalWrite(inp1,HIGH);
      digitalWrite(inp2,LOW);
      digitalWrite(inp3,HIGH);
      digitalWrite(inp4,LOW);
      analogWrite(enA,100);
      analogWrite(enB,100);
    }
    else if (a=='S'){
      digitalWrite(inp1,LOW);
      digitalWrite(inp2,HIGH);
      digitalWrite(inp3,LOW);
      digitalWrite(inp4,HIGH);
      analogWrite(enA,100);
      analogWrite(enB,100);
    }
    else if (a=='A'){
      digitalWrite(inp1,LOW);
      digitalWrite(inp2,LOW);
      digitalWrite(inp3,HIGH);
      digitalWrite(inp4,LOW);
      //analogWrite(enA,100);
      analogWrite(enB,100);
    }
    else if (a=='D'){
      digitalWrite(inp1,HIGH);
      digitalWrite(inp2,LOW);
      digitalWrite(inp3,LOW);
      digitalWrite(inp4,LOW);
      analogWrite(enA,100);
      //analogWrite(enB,100);
    }
    else if(a=='T'){
      digitalWrite(inp1,LOW);
      digitalWrite(inp2,LOW);
      digitalWrite(inp3,LOW);
      digitalWrite(inp4,LOW);
    }
  }
}