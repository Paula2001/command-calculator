#ifndef CALC_H
#define CALC_H
#include <iostream>

using namespace std ;

class calc {
    public:
        calc();
        int get_choices();
    protected:

    private:
        double result;
        void recursion();
        switch_function_arithmetic(double y,char c,double p);
        switch_function_test(double s,double e ,char c);
        void sum(double y);
        void minus(double y);
        void divided(double y);
        void times(double y);
        void power(double p);
        void get_prime(double s ,double e);
        void get_even(double s,double e);

};

#endif // CALC_H
