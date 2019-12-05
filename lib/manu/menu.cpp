#include <menu.h>

void Select_Waveform(){

    char waveform;
    waveform = Serial.read();
    switch(waveform){
    case 'T': // put function for tringular waveform here.
    break;
    case 'S': // put function for Sin waveform here.
    break;
    default: Serial.printf("character %c is invalid! Press [x] to exit.\n", waveform);
    break;
    }
}

void Select_Frequency(){


}
