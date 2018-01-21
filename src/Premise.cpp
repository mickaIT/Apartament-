#include "Premise.h"

Premise::Premise(double area, double rate): area_in_meters(area), rate_per_meter(rate)
{

}

double Premise::area()
{
    return area_in_meters;
}

double Premise::rate()
{
    return rate_per_meter;
}
