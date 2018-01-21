#ifndef BUILDING_H
#define BUILDING_H

#include <vector>
#include "Premise.h"

using namespace std;

class Building
{
    vector<Premise*> premises;

    public:
    Building();
    ~Building();
    void add_premise(Premise *aPremise);
    double total_rent();
    double profit(double owner_costs_meter);
};

#endif
