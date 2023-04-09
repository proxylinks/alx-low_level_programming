#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */

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

