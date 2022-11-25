volatile char Char;

void setup(){
  Serial.begin(9600);
  Char = Serial.read();
  do{
    Serial.write(Char);
  }while((Serial.available() > 0 == true));
}

void loop(){

}