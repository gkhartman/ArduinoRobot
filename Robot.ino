
static const int MOTOR_IN_A = 6; //H Bridge Input A -> Arduino A0 pin
static const int MOTOR_IN_B = 7; //H Bridge Input B -> Arduino A1 pin
static const int MOTOR_IN_C = 8; //H Bridge Input C -> Arduino A2 pin
static const int MOTOR_IN_D = 9; //H Bridge Input D -> Arduino A3 pin
static const int BT_RX_PIN = 2; //pin number connected to reciever pin of bluetooth module
static const int BT_TX_PIN = 3; //pin number connected to trasmitter pin of bluetooth module

//Initial Setup Function
void setup() {
  pinMode(MOTOR_IN_A, OUTPUT);
  pinMode(MOTOR_IN_B, OUTPUT);
  pinMode(MOTOR_IN_C, OUTPUT);
  pinMode(MOTOR_IN_D, OUTPUT);
  pinMode(BT_RX_PIN, OUTPUT); //Init output pin to BT Module
  pinMode(BT_TX_PIN, INPUT);  //Init input pin from BT Module
}

//Main Logic Loop
void loop() {
 
  analogWrite(MOTOR_IN_B, 250);
  analogWrite(MOTOR_IN_C, 250);
  delay(5000);
  analogWrite(MOTOR_IN_B, 0);
  analogWrite(MOTOR_IN_C, 0);
  delay(5000);
}

void wait() {
  while(true){}
}

void motorText() {
 int rotations = 10000;
  for(int i = 0; i < rotations; i++) {
    analogWrite(MOTOR_IN_A, 150);
  }
  analogWrite(MOTOR_IN_A, 0);
  wait();
  
  for(int i = 0; i < rotations; i++) {
    analogWrite(MOTOR_IN_B, 150);
  }
  analogWrite(MOTOR_IN_B, 0);
  wait();
  
  for(int i = 0; i < rotations; i++) {
    analogWrite(MOTOR_IN_C, 150);
  }
  analogWrite(MOTOR_IN_C, 0);
  wait();
  
  for(int i = 0; i < rotations; i++) {
    analogWrite(MOTOR_IN_D, 150);
  }
  analogWrite(MOTOR_IN_D, 0);
  wait(); 
}
