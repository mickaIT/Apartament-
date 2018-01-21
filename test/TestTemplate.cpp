#include <boost/test/unit_test.hpp>

#include "Template.h"
#include "Building.h"
#include "Apartment.h"
#include "Office.h"
#include "Premise.h"

BOOST_AUTO_TEST_SUITE(ProjectTest)



BOOST_AUTO_TEST_CASE(AddTest) {
Building blok;
blok.add_premise(new Apartment(60, 15.00));
blok.add_premise(new Apartment(90, 14.00));
blok.add_premise(new Apartment(40, 10.00));
blok.add_premise(new Office(20, 20.00, 140));
blok.add_premise(new Office(90, 30.00, 200));
        BOOST_CHECK_EQUAL(blok.total_rent(), 6000.00);
}

BOOST_AUTO_TEST_CASE(RemoveTest) {
Building blok;
blok.add_premise(new Apartment(60, 15.00));
blok.add_premise(new Apartment(90, 14.00));
blok.add_premise(new Apartment(40, 10.00));
blok.add_premise(new Office(20, 20.00, 140));
blok.add_premise(new Office(90, 30.00, 200));
      BOOST_CHECK_EQUAL(blok.profit(8.00), 3600.00);
}

BOOST_AUTO_TEST_SUITE_END()
