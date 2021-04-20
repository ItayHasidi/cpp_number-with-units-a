#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;
using namespace std;


TEST_CASE(""){
    ariel::NumberWithUnits a1{2, "km"};
    ariel::NumberWithUnits a2{3, "km"};
    ariel::NumberWithUnits a4{2, "m"};
    ariel::NumberWithUnits a5{200, "cm"};
    ariel::NumberWithUnits a6{2, "kg"};
    ariel::NumberWithUnits a7{2, "USD"};
    ariel::NumberWithUnits a9{1, "USD"};
    ariel::NumberWithUnits a8{6.66, "ILS"};
    ariel::NumberWithUnits a10{0, "km"};
    ariel::NumberWithUnits a11{0, "m"};
    ariel::NumberWithUnits a12{0, "cm"};

    CHECK(a1 <= a2);
    CHECK(a1 < a2);
    CHECK(a1 > a5);
    CHECK(a1 == a1);
    CHECK(a1 > a4);
    CHECK(a4 == a5);
    CHECK(a1 != a6);
    CHECK(a1 != a7);
    CHECK(a6 != a7);
    CHECK(a7 == a8);
    CHECK((a7+a9) > a8);
    CHECK((a8+a9) > a7);
    CHECK((a7*3) > a8);
    CHECK((a7++) > a8);
    CHECK((a7--) <= a8);
    CHECK((a1++) >= a2);
    CHECK((a2--) == a1);
    CHECK((a5-a1) == a10);
    CHECK(a10 == a11);
    CHECK(a11 == a12);
}