int out = 10;
int outt = 11;
int in = 4;
int rd;

void setup()

{

pinMode(out,OUTPUT);
pinMode(outt,OUTPUT);
pinMode(in,INPUT);

}

void loop()

{

rd=digitalRead(in);

if(rd==HIGH)

{

digitalWrite(out,HIGH);
digitalWrite(outt,HIGH);
delay(100);

}

else

{

digitalWrite(out,LOW);
digitalWrite(outt,LOW);

delay(100);

}

}
