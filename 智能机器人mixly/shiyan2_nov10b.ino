char _ABVAR_1_light = ' ' ;
void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (( ( Serial.available() ) == ( 1 ) ))
  {
    _ABVAR_1_light = Serial.read();
    if (( ( _ABVAR_1_light ) == ('1') ))
    {
      __ardublockDigitalWrite(13, HIGH);
    }
    else
    {
      if (( ( _ABVAR_1_light ) == ('1') ))
      {
        __ardublockDigitalWrite(13, LOW);
      }
    }
  }
}


