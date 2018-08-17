#include <iostream>
#include "controls.h"
#include "calc.h"
#include <string>
using namespace std;
controls::controls()
{

}


void controls::retest(){
    cout << "Please "<<"choose between by simply <prime> , <even> or <quit> "<<endl ;
    calc calculator;
    cin >> st ;
    calculator.switch_function_test(s,e,st);

}
int controls::get_choices()
{
    calc c1;
    cout << "choose between ( test ) mode or arithmetic by typing ( arith ) or just quit the program by typing ( quit )"<<endl ;
    string decide;
    cin >> decide;
    if(decide == "arith")
    {
        cout << "write the 1st number then the sign"<<endl;
        cout << "+  , - , * , / , " <<endl;
        cout << "there's some special signs like( p )for power like the that( num p num ) ,"<<endl;
        cout << "also ( s ) for square root but still under construction (num p num) "<<endl;
        cout << "if u want to quit press ( q )"<<endl;
        double x, y  ;
        char z ;
        double p ;
        cout <<"num. -> ";
        cin >> x  ;
        cout <<"sign. -> ";
        cin >> z ;
        if (z == 'p' || z == 's')
        {

            cin >>p;
        }
        else
        {
            cin >>y ;
        }
        c1.switch_function_arithmetic(y,z,p);
    }
    else if(decide == "test")
    {
        cout << "Please choose between testing prime numbers by typing ( prime ) "<<endl;
        cout << "or choose testing even numbers by typing (even)"<<endl;
        cin>>st;
        c1.switch_function_test(s,e,st);
    }
    else if(decide == "quit")
    {
        return 0;
    }
}
void controls::even_recap(){
    calc c2;
    cout << "want to test something else ? if yes type ( yes ) ,if no type ( no ) to quit test mode" <<endl;
     string x ;
     cin >> x ;
     double s, e;
     if (x == "yes"){
        cout << "1st number -> ";
        cin >>s;
        cout << "2nd number -> ";
        cin >>e ;
        c2.get_even(s,e);
     }else{
        get_choices();
     }
}
void controls::prime_recap(){
    calc c2;
    cout << "want to test something else ? if yes type ( yes ) ,if no type ( no ) to quit test mode" <<endl;
     string x ;
     cin >> x ;
     double s, e;
     if (x == "yes"){
        cout << "1st number -> ";
        cin >>s;
        cout << "2nd number -> ";
        cin >>e ;
        c2.get_prime(s,e);
     }else{
        get_choices();
     }
}
int controls::quit(){
    return 0 ;
}

