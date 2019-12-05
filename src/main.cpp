#include <menu.h>

char waveform;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.printf("Enter Waveform: \n");
    Select_Waveform();
}