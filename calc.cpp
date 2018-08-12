#include "calc.h"
#include <iostream>
using namespace std;
calc::calc()
{
    result = 0;
}
calc::switch_function_test(double s,double e,char c)
{
    switch (c){
        case 'p' :
            this->get_prime(s,e);
            break;
        case 'e' :
            this->get_even(s,e);
            break;
    }
}
calc::switch_function_arithmetic(double y,char c,double p)
{
    switch(c)
    {
    case '+':
        sum(y);
        break ;
    case '-':
        minus(y);
        break;
    case '/':
        divided(y);
        break;
    case '*':
        times(y);
        break;
    case 'p':
        power(p);
        break;
    default:
        cout << "Enter recognizable sign" ;
    }
}
void calc::recursion()
{
    double y ;
    char c ;
    double p;
    cout << " = " << result << " " ;
    cin >> c ;
    switch (c){
    case 'q' :
        get_choices();
        break;
    case 'm' :
        cin >> y >> p ;
        this->switch_function_arithmetic(y,c,p);
        break;
    case 'p':
        cin >>p;
        this->switch_function_arithmetic(y,c,p);
        break;
    }
}

void calc::sum(double y)
{
    result +=  y;
    recursion();
}
void calc::minus(double y)
{
    result-= y;
    recursion();
}
void calc::divided(double y)
{
    result /=  y;
    recursion();
}
void calc::times(double y)
{
    result*= y;
    recursion();
}
void calc::power(double p)
{
    int cons = result;
    for(int i = 1; i < p; i++)
    {
        result*=cons;
    }
    recursion();
}
void calc::get_prime(double s,double e)
{
    if(s == 1 || s == 0){
        s = 2;
    }
    for(int i = s; i <= e; i++)
    {
        int count = 0 ;
        for(int y = s; y < i ; y++ )
        {
            if(i % y == 0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            cout << i << " is Prime Number "<<endl;
        }
    }
}

int calc::get_choices()
{
    cout << "choose between test mode or arithmetic or just quit the program by typing <quit>"<<endl ;
    string decide;
    cin >> decide;

    if(decide == "arith")
    {
        double x, y  ;
        char z ;
        double p ;
        cin >> x >> z ;
        if (z != 'p')
        {
            cin >>y;
        }
        else
        {
            cin >>p ;
        }
        result = x;
        switch_function_arithmetic(y,z,p);
    }
    else if(decide == "test")
    {
        double s ,e;
        char c;
        cin >> c >> s >> e;
        switch_function_test(c,s,e);
    }
    else if(decide == "quit")
    {
        return 0;
    }

}

