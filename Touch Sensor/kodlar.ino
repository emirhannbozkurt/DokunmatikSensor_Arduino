int yesil = 5;
int kirmizi = 6;
int sensor =3;
int deger;

void setup (){
  Serial.begin(9600);
  pinMode(yesil, OUTPUT);
  pinMode(kirmizi, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop (){
  deger = digitalRead(sensor);
  Serial.println(deger);
  if(deger==1){
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,HIGH);
    
  }else{
    digitalWrite(kirmizi,HIGH);
    digitalWrite(yesil,LOW);
  }
}
