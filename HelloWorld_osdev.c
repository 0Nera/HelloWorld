#include <stddef.h>


int row, col;
uint16_t* buffer = (uint16_t*) 0xB8000;

void putchar(const char c){
    const size_t index = row * 80 + col;
    buffer[index] = (uint16_t) c | (uint16_t) 15 << 8;
    col++;
}


void kernel(){
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar(' ');
    putchar('W');
    putchar('o');
    putchar('r');
    putchar('l');
    putchar('d');
    putchar('!');
}