#ifndef CALC_H
#define CALC_H
#include <string>
#include <iostream>
#include "controls.h"
using namespace std ;

class calc:public controls{
    public:
        calc();
        calc(double x);
        switch_function_test(double s,double e ,string st);
        switch_function_arithmetic(double y,char c,double p);
        void get_even(double s,double e);
        void get_prime(double s ,double e);

    protected:

    private:
        void recursion();
        void sum(double y);
        void minus(double y);
        void divided(double y);
        void times(double y);
        void power(double p);
        void square(double p);
        double sqr;


};

#endif // CALC_H
