// https://en.wikipedia.org/wiki/CHIP-8
// http://devernay.free.fr/hacks/chip8/C8TECH10.HTM

#ifndef CHIP_H
#define CHIP_H

#include <stdlib.h>
#include "mem.h"
#include "keys.h"


/* Initialises chip */
int8_t chip_init(Chip* obj, const char* romfile, uint16_t width, uint16_t height);

/* Executes a cycle */
void chip_run(Chip* obj);

#endif // CHIP_H