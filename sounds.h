#ifndef sounds
#define sounds

#include "Arduino.h"

#endif

class Sounds {
  public:
    // Constructor
    Sounds();
    
    // Methods
    void play_start_sound(int pin_number);
    void play_stopping_sound(int pin_number);

    
   private:
    int tempo = 150;

  
};
