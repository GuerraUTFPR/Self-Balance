
int a1 = 3;
int a2 = 9;

int b1 = 10;
int b2 = 11;

// Prueba set point
double distancia = 0;

void InitMotors(){
  
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);  
  pinMode(b1, OUTPUT);  
  pinMode(b2, OUTPUT); 
 
  // Set direction to none direction
  digitalWrite(a1,HIGH); 
  digitalWrite(a2,HIGH); 
  digitalWrite(b1,HIGH); 
  digitalWrite(b2,HIGH); 
  
}


void MotorControl(double out){

  byte vel = abs(out);    // Absolute value of velocity
  
  // Checks velocity fits the max ouptut range
  if (vel<0)
    vel=0;
  if (vel > 255)
    vel=255;
  
  // Sets direction
  if (out > 0){              // forward
    digitalWrite(a1,HIGH);
    digitalWrite(a2,LOW);
    digitalWrite(b1,LOW);
    digitalWrite(b2,HIGH);
  }else{                     // backward
    digitalWrite(a1,LOW);
    digitalWrite(a2,HIGH);
    digitalWrite(b1,HIGH);
    digitalWrite(b2,LOW);
  }
  

  
  
}

void PWMMotorControl(double out){

  byte vel = 0;
  byte cal = 4;

  if (out > 0){/* Para frente */

    analogWrite(a1,0);  //Esquerda Frente
    analogWrite(a2,abs(out));    //Esquerda Tras
    analogWrite(b1,0);    //Dir Tras
    analogWrite(b2,abs(out + cal));  //Dir Frent 
  }else{/* Para Trás */

    analogWrite(a1,abs(out));    //Esquerda Frente
    analogWrite(a2,0);  //Esquerda Tras
    analogWrite(b1,abs(out + cal));  //Dir Tras
    analogWrite(b2,0);    //Dir Frente 
  }
}



void testeMotorControl(){
    analogWrite(a1,0); //Esquerda Frente
    analogWrite(a2,0); //Esquerda Tras
    analogWrite(b1,0); //Dir Tras
    analogWrite(b2,0); //Dir Frente  
}

