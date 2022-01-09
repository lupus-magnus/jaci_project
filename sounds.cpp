#include "sounds.h"

Sounds::Sounds(){

}
  
// Starting Sound
void Sounds::play_start_sound(int pin_number){
  tone(pin_number, 2349);
  delay(tempo);
  noTone(pin_number);
  
  tone(pin_number, 2093);
  delay(tempo);
  noTone(pin_number);
  
  tone(pin_number, 2349);
  delay(tempo);
  noTone(pin_number);
  
  tone(pin_number, 2637);
  delay(4*tempo);
  noTone(pin_number);  
}


// Stoping Sound
void Sounds::play_stopping_sound(int pin_number){
  tone(pin_number, 2093);
  delay(tempo);
  noTone(pin_number);

  
  tone(pin_number, 2349);
  delay(tempo);
  noTone(pin_number);

  tone(pin_number, 2093);
  delay(2*tempo);
  noTone(pin_number);

}
