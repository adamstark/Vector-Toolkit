#ifndef USEFUL_FUNCTIONS_TESTS
#define USEFUL_FUNCTIONS_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// USEFUL FUNCTION TESTS
//=============================================================
BOOST_AUTO_TEST_SUITE(UsefulFunctionsTests)

//=============================================================
BOOST_AUTO_TEST_CASE(UsefulFunctions1)
{
    std::vector<int> x = VTi::range(100);
    
    BOOST_CHECK_EQUAL(VTi::getFirstElement(x), 0);
    
    BOOST_CHECK_EQUAL(VTi::getLastElement(x), 99);

    std::vector<int> y = VTi::getEvenElements(x);
    
    for (int i = 0;i < y.size();i++)
    {
        BOOST_CHECK_EQUAL(y[i], x[2*i]);
    }
    
    std::vector<int> z = VTi::getOddElements(x);
    
    for (int i = 0;i < z.size();i++)
    {
        BOOST_CHECK_EQUAL(z[i], x[(2*i)+1]);
    }
}

//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
