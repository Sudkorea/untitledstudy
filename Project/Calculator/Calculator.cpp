#include <cmath>
#include "Calculator.h"

using namespace std;

void Calculator::Input(char op)
{
    m_op = op;
}

double Calculator::Operation(double a1, double a2)
{
    double result;
    switch (m_op)
    {
        case '+':
            result = Op_sum(a1, a2);
            break;
        case '-':
            result = Op_sub(a1, a2);
            break;
        case '*':
            result = Op_mul(a1, a2);
            break;
        case '/':
            result = Op_div(a1, a2);
            break;
        default:
            result = nan("0");
    }
    return result;
}

double Calculator::Op_sum(double a1, double a2)
{
    return a1+a2;
}

double Calculator::Op_sub(double a1, double a2)
{
    return a1-a2;
}

double Calculator::Op_mul(double a1, double a2)
{
    return a1*a2;
}

double Calculator::Op_div(double a1, double a2)
{
    return a1/a2;
}