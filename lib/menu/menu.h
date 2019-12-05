#ifndef MENU_H
#define MENU_H

#include <stdint.h>

#define BUFFER_SIZE 3
#define WAVEFORM_OPTION 'W'
#define FREQUENCY_OPTION 'F'
#define INFORMATION_OPTION 'I'
#define SINE_WAVEFORM 'S'
#define TRIANGLE_WAVEFORM 'T'
#define MAX_FREQUENCY 10
#define MIN_FREQUENCY 1

char readCommand();
char readWaveform();
char *readFrequency(char *buffer);

#endif