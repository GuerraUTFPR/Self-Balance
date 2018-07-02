# Robô Self-Balance (NEYMAR)

O Robô Self-Balance é um robô contendo apenas duas rodas, sua finalidade é se manter equilibrado na posição vertical. Para isto, é utilizado componentes que em conjunto cumprem com a proposta deste robô.

As Seções a seguir contemplam os seguintes tópicos:
  - Componentes necessários
  - Instrução de instalação
  - Instrução de configuração

# Componentes necessários

  - 1xArduino UNO
  - 2xMotores DC
  - 1xPonte-H (HG7881)
  - 1xAcelerometro (MPU6050)
  - 1xFonte de alimentação externa

# Intrução de instalação

A instalação dos componentes deve ser feita da seguinte forma:
## Acelerometro:
    Pino VCC conectado a porta de 5V do Arduino.
    Pino GND conectado a porta GND do Arduino.
    Pino SCL conectado a porta A5 do Arduino.
    Pino SDA conectado a porta A4 do Arduino.
    Pino INT conectado a porta digital 2 do Arduino.
    
## Ponte H
    Pino B-1A conectado a porta digital 3 do Arduino.
    Pino B-1B conectado a porta digital 9 do Arduino.
    Pino GND conectado ao polo negativo da fonte de alimentação.
    Pino VCC conectado ao polo positivo da fonte de alimentação.
    Pino A-1A conectado a porta digital 11 do Arduino.
    Pino A-1B conectado a porta digital 10 do Arduino.
    Motores devem ser conectados a saída da ponte H.
    É necessário ligar um GND em comum com a ponte H e o Arduino.
    
![N|Solid](https://image.ibb.co/cWG8Zy/Desenho_sem_t_tulo.jpg)
    
# Instrução de Configuração

O arquivo PID.ino contém variáveis que é possível editar para um funcionamento correto do robô. Essa alteração é feita de acordo com a construção e alimentação do robô.

A variável KP é o tempo de resposta, quanto maior o valor, mais brusco será a resposta do robô. Na tentativa de se equilibrar, o robô pode ir mais pra um lado do que para o outro, sendo assim é necessário alterar a variável SetPoint de forma que fique o mais equilibrado possível. Essas normalmente são realizadas por tentativa e erro.
