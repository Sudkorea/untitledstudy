#ifndef UNTITLED_CALCULATOR_H
#define UNTITLED_CALCULATOR_H
#include <iostream>

class Calculator
{
public:
    void Input(char op);
    double Operation(double a1, double a2);

private :
    char m_op;

    double Op_sum(double a1, double a2);
    double Op_mul(double a1, double a2);

    double Op_sub(double a1, double a2);

    double Op_div(double a1, double a2);
};


#endif //UNTITLED_CALCULATOR_H
