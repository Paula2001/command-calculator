#include <iostream>
#include "calc.h"
#include "controls.h"

using namespace std;
int main()
{
    calc calculator;
    controls ctrls;
    ctrls.explain();
    calculator.get_choices();
    return 0;
}
