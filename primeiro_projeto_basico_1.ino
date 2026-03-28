// C++ code
//
  int portas[]={13,12,11};
  const int numeroleds =3;

void setup()
{
  for(int i=0 ; i<=numeroleds; i++){
    pinMode(portas[i] , OUTPUT);
  }
}

void loop()
{
  
  for( int i=0 ; i< numeroleds; i++){
    digitalWrite(portas[i] , HIGH);
    delay(150);
    digitalWrite(portas[i] , LOW);
    
  }
  
}

