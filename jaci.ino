#include "sounds.h"

Sounds sounds_lib;

int buzzer = 8;
int led_green = 2;
int led_red = 4;
int water_pump = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(water_pump, OUTPUT);
}

void loop() {
  digitalWrite(led_red, HIGH);
  delay(3000);
  
  // Turning on sequence:
  sounds_lib.play_start_sound(buzzer);
  digitalWrite(led_green, HIGH);
  digitalWrite(led_red, LOW);
  digitalWrite(water_pump, HIGH);
  delay(3000);

  
  // Turning off sequence:
  sounds_lib.play_stopping_sound(buzzer);
  digitalWrite(led_green, LOW);
  digitalWrite(led_red,HIGH);
  digitalWrite(water_pump, LOW);
  delay(5000);
  
}
