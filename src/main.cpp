//
// Created by Marcin Kwapisz on 2017-01-02.
//

#include <iostream>
#include "Template.h"
#include "Building.h"
#include "Apartment.h"
#include "Office.h"
#include "Premise.h"

using namespace std;

int main() {

    Building blok;
    blok.add_premise(new Apartment(60, 15.00));
    blok.add_premise(new Apartment(90, 14.00));
    blok.add_premise(new Apartment(40, 10.00));
    blok.add_premise(new Office(20, 20.00, 140));
    blok.add_premise(new Office(90, 30.00, 200));

    cout<<"Total Rent: "<<blok.total_rent()<<endl;;
    cout<<"Total profit: "<<blok.profit(8.00)<<endl;

    return EXIT_SUCCESS;
}
