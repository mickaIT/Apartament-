#include "Apartment.h"

Apartment::Apartment(double area, double rate): Premise(area, rate)
{

}

double Apartment::rent()
{
    double rent = area_in_meters*rate_per_meter;
    return rent;
}
