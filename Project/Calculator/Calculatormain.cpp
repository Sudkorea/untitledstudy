#include "Calculator.cpp"
using namespace std;

int main()
{
    Calculator cal{};
    double a1, a2, result;
    char op;
    cin >> a1 >> op >> a2;
    cal.Input(op);
    cout<<cal.Operation(a1, a2);
}