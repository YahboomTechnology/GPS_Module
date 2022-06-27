#define GPSSerial  Serial
#define DEBUGSerial Serial


void setup()	//Initialize content
{
  GPSSerial.begin(9600);			//Define baud rate 9600
  DEBUGSerial.begin(9600);  
}

void loop()		//main loop
{
  while (GPSSerial.available()) {   
     DEBUGSerial.write(GPSSerial.read());//When GPS data is received, it is output through Serial
  }
  

}
