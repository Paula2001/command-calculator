#include <iostream>
#include "calc.h"

using namespace std;
int main()
{
    cout << "Choose between the 2 modes :" <<endl;
    cout << "For arithmetic type : arith" <<endl;
    cout << "For Testing numbers (like test number for being prime or not type) : "<< " test " <<endl;
    string decide ;
    cin >> decide ;
    if(decide == "arith"){

        double x , y  ;
        char z ;
        double p ;
        cin >> x >> z ;
        if (z != 'p'){
            cin >>y;
        }else{
            cin >>p ;
        }
        calc cal(x);
        cal.switch_function_arithmetic(y,z,p);
    }else{
        cout << "not working"<<endl;
    }




    return 0;
}
