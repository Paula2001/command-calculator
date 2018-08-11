#ifndef CALC_H
#define CALC_H
#include <iostream>
using namespace std ;

class calc {
    public:
        calc();
        calc(double x);
        switch_function_arithmetic(double y,char c,double p);
        swtch_function_test();

    protected:

    private:
        double result;
        void recursion();
        void sum(double y);
        void minus(double y);
        void divided(double y);
        void times(double y);
        void power(double p);
        void get_prime(double s ,double e);
};

#endif // CALC_H
