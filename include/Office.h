#ifndef OFFICE_H
#define OFFICE_H

#include "Premise.h"

class Office: public Premise
{
    double additional_costs;

    public:
    Office(double area, double rate, double costs);
    double costs();
    double rent();
};

#endif
