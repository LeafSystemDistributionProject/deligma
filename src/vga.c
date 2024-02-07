#include <string.h>
#include <stdint.h>

#include "vga.h"

char *buf = (char*)0xB8000;

void vga_start(const char *input) {
    for (size_t x = 0; x < 200; x++) {
        for (size_t y = 0; y < 100; y++) {
            *buf++ = *input;
            *buf++ = 15;
        }
    }
}

