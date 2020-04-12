#include <stdio.h>
#include <stdlib.h>
#include "t2.h"

uint insertar_bits(uint x, int pos, uint y, int len){   
    uint mask = ~(-1<<31);
    uint aux = ((x<<(31-pos))&mask)>>(31-pos);    
    y = y<<pos;   
    x = ((x>>pos)<<(len+pos))|y;              
    return x|aux;   
}

