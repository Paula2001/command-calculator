#ifndef CONTROLS_H
#define CONTROLS_H
#include "calc.h"


class controls : public calc
{
    public:
        controls();
        virtual ~controls();
        void explain();
        char get_choices();

    protected:

    private:
};

#endif // CONTROLS_H
