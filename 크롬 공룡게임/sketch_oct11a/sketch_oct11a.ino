#include "Keyboard.h"                                                                                                                                                                                                                                                                                                                 
int state, state2;                                                                                                                                                                 
const byte btn = 2;                                 
 const byte btn2 = 3;                                                                                                                                                                                                                                                                                                                                                                                                                                          
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
 pinMode(btn, INPUT);
  pinMode(btn2, INPUT);
}                                                                                                             

void loop() {                    
  // put your main code here, to run repeatedly:
  state = digitalRead(btn);
   state2 = digitalRead(btn2);                                                                                                           
  if(state==0)
  {
    Keyboard.write(' ');
    delay(220);
  }
  if(state2==0)
  {
    Keyboard.press(217); 
  }
  else{
  Keyboard.release(217);
  }
  
}
