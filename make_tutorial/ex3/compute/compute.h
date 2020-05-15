#ifndef __COMPUTE_H__
#define __COMPUTE_H__

struct expression {
unsigned char n1;
unsigned char n2;
unsigned char operator;
};

signed char calculateResult(struct expression input);

#endif