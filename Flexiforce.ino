int ffs1= A0;
int ffsdata = 0;
float vout;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(ffs1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ffsdata = analog Read (ffs1);
vout = (ffsdata*5.0)/1023;
vout = vout *cf;
Serial.print("Flexiforce Sensor : " );
Serial.print(vout,3);
Serial.println("  ");
delay (100);
}
