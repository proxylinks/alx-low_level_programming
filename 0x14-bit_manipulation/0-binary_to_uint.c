#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

unsigned int binary_to_uint(const char *b) {
    unsigned int decimal_num = 0;
    int len = strlen(b);

    for(int i = 0; i < len; i++) {
        if(b[i] == '1') {
            decimal_num += pow(2, len-i-1);
        }
    }
    
    return decimal_num;
}

