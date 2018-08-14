#ifndef CONTROLS_H
#define CONTROLS_H
#include <string>
#include <iostream>
using namespace std;
class controls
{
    public:
        controls();
        int get_choices();
        double result ;


    protected:
        void even_recap();
        void prime_recap();
        void retest();
        int quit();
    private:
        double s , e;
        char c;
        string st;
};

#endif // CONTROLS_H
