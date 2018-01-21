#ifndef APARTMENT_H
#define APARTMENT_H

#include  "Premise.h"

class Apartment: public Premise
{
    public:
    Apartment(double area, double rate);
    double rent();
};

#endif
