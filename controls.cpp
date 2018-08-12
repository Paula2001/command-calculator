#include "controls.h"
#include <iostream>
using namespace std;
controls::controls()
{

}

controls::~controls()
{

}
void controls::explain()
{
    cout << "Choose between the 2 modes :" <<endl;
    cout << "For arithmetic type : arith" <<endl;
    cout << "For Testing numbers (like test number for being prime or not type) : "<< " test " <<endl;
}

