#include "Building.h"
#include <vector>

using namespace std;

Building::Building()
{

}

Building::~Building()
{
    for(int i=0; i<premises.size(); i++)
    {
        delete premises[i];
    }
}

void Building::add_premise(Premise *aPremise)
{
    premises.push_back(aPremise);
}

double Building::total_rent()
{
    double suma = 0;
    for(int i=0; i<premises.size(); i++)
    {
        suma += (premises[i] -> rent());
    }
    return suma;
}

double Building::profit(double owner_costs_meter)
{
    double all_meters = 0;
    for(int i=0; i<premises.size(); i++)
    {
        all_meters += (premises[i] -> area());
    }

    double owner_costs;
    owner_costs = owner_costs_meter*all_meters;

    double profit;
    profit = total_rent()-owner_costs;

    return profit;
}
