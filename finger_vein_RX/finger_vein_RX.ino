
int i;
void setup()
{

  Serial.begin(9600);
 
  }
void loop() 
  {
{
  
 while(Serial.available())
     i=Serial.read(); 

  }
if(i=='A')
{
 Serial.print("yes");
}
if(i=='B')
{
 Serial.print("no");
}
if(i=='C')
{
 Serial.print("normal");
}
}
