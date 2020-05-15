#include "compute.h"


#define ADD '+'
#define SUB '-'
#define MULT '*'
#define DIV '/'

signed char calculateResult(struct expression input) {   
    signed char result;
    
    if (input.operator == ADD)
        result = input.n1 + input.n2;
    else if (input.operator == SUB)
        result = input.n1 - input.n2;
    else if (input.operator == MULT)
        result = input.n1 * input.n2;
    else if (input.operator == DIV)
        result = input.n1 / input.n2;
    else
        result = 0;

    return result;
}
