#include <stdio.h>
#include "input.h"

struct expression input;

static void print(unsigned char operator) {
    printf("The operator: %c\n", operator);
}

void getUserInput() {
    input.n1 = getchar() - '0';
    input.operator = getchar();
    input.n2 = getchar() - '0';
    print(input.operator);
}