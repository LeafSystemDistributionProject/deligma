#include "dprint.h"
#include "vga.h"

void dprint(const char *input);
void vga_start(const char *input);

void dmain(void) {
    vga_start(" ");
    dprint("Deligma test");
}
