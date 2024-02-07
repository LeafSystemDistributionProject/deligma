#include <string.h>
#include <stdint.h>

#include "dprint.h"

char *buff = (char*)0xB8000;

size_t strlen(const char *str) {
	size_t i = 0;
	while (str[i] != '\0')
		i++;

	return i;
} /* strlen for test*/

void dprint(char *input) {
    for (size_t i = 0; i < strlen(input)+1; i++) {
        *buff++ = input[i]; 
        *buff++ = 15;
        /*
        if (i-1 == '\n') {
            for (size_t x = 0; x < ; x++) {
                *buf++ = ' ';
                *buf++ = 15;
            }
        } NOT FINISHED*/ 
    }
}
