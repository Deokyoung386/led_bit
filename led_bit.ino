

void setup() {
  DDRB = B00111100; //13번핀
  //DDRB = B00001000; //10번핀
  // put your setup code here, to run once:

}

void loop() {

  PORTB |= B00111100;   //13번핀
  delay(1000);
  //PORTB |= B00001000;     //1 번핀
  
  PORTB= B00000000;    // 0
  delay(1000);
  // put your main code here, to run repeatedly:

}
