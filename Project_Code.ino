char t;
 
void setup() {
pinMode(13,OUTPUT);   //left motors  forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right  motors forward
pinMode(10,OUTPUT);   //right motors reverse
pinMode(9,OUTPUT);   //Led
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move  forward(all motors rotate in forward direction)
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //move reverse (all  motors rotate in reverse direction)
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
  
else if(t == 'L'){      //turn right (left side motors rotate in forward direction,  right side motors doesn't rotate)
  digitalWrite(11,HIGH);
}
 
else  if(t == 'R'){      //turn left (right side motors rotate in forward direction, left  side motors doesn't rotate)
  digitalWrite(13,HIGH);
}

else if(t ==  'W'){    //turn led on or off)
  digitalWrite(9,HIGH);
}
else if(t == 'w'){
  digitalWrite(9,LOW);
}
 
else if (t == 'Q') {      // move forward while turning left
    digitalWrite(13, HIGH); // left motors forward
    digitalWrite(11, HIGH); // right motors forward
    delay(100);              // adjust this delay to control the turning rate
    digitalWrite(13, LOW);  // turn off left motors briefly to create turning effect
    delay(50);            // adjust this delay to control the turning rate    
}
else if (t == 'E') { // move forward while turning right
    digitalWrite(13, HIGH); // left motors forward
    digitalWrite(11, HIGH); // right motors forward
    delay(100);              // adjust this delay to control the turning rate
    digitalWrite(11, LOW);  // turn off right motors briefly to create turning effect
    delay(50);                 
}
else if (t == 'X') {    //drift Right
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
}
else if (t == 'Y') {    //drift Left
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}

else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

}