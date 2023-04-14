#define led 11
int d=10;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  for(int i=0; i<256; i++){
  analogWrite(led,i);
  delay(d);

  }
   for(int j=255; j>0; j--){
  analogWrite(led,j);
 delay(d);
   } 
}
