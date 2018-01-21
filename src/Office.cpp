#include "Office.h"

Office::Office(double area, double rate, double costs):Premise(area, rate), additional_costs(costs)
{

}

double Office::costs()
{
    return additional_costs;
}

double Office::rent()
{
    double rent = ((area_in_meters*rate_per_meter) + additional_costs);
    return rent;
}
