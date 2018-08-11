#include "calc.h"
#include <iostream>
using namespace std;
calc::calc()
{
    result = 0;
}
calc::calc(double x)
{
    result = x;
}
calc::swtch_function_test()
{

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
    if (c == 'm')
    {
        cin >> y >> p ;
    }
    if(c != 'p')
    {
        cin >>y;
    }
    else
    {
        cin >> p ;
    }
    this->switch_function_arithmetic(y,c,p);
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
    for(int i = 2; i <= 10; i++)
    {
        int count = 0 ;
        for(int y = 2; y < i ; y++ )
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
