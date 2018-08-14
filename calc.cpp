#include <iostream>
#include "calc.h"
#include <string>
using namespace std;
calc::calc()
{
 result = 2;
}
calc::switch_function_test(double s,double e,string st)
{

    if(st == "prime"){
        cin >>s >>e;
        this->get_prime(s,e);
    }else if(st == "even"){
        cout << "1st number -> ";
        cin >>s;
        cout << "2nd number -> ";
        cin >>e ;
        this->get_even(s,e);
    }else if(st == "quit"){
        quit();
    }else{
        retest();
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
    switch (c)
    {
    case 'q' :
        get_choices();
        break;
    case 'p' :
        cin >> p;
        switch_function_arithmetic(y,c,p);
    default:
        cin >> y  ;
        switch_function_arithmetic(y,c,p);
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
    double cons = result;
    for(int i = 1; i < p; i++)
    {
        result*=cons;
    }
    recursion();
}
void calc::get_prime(double s,double e)
{
    if(s == 1 || s == 0)
    {
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


void calc::get_even(double s,double e)
{
    (s == 0)? s = 2: 0 ;
    for(int i = s; i <= e; i++)
    {
        if(i % 2 == 0)
        {
            cout <<i <<": is even"<<endl;
        }
    }
    even_recap();
}



