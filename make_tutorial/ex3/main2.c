#include <stdio.h>

#include "compute.h"
#include "input.h"

void print(signed char result) {
    printf("I am program 2!\n");
    printf("%u %c %u = %d\n", input.n1, input.operator, input.n2, result);
}

int main() {
    getUserInput();
    signed char result = calculateResult(input);
    print(result);
}