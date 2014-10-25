#ifndef BOOLEAN_FUNCTION_TESTS
#define BOOLEAN_FUNCTION_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// BOOLEAN FUNCTION TESTS
//=============================================================
BOOST_AUTO_TEST_SUITE(BooleanFunctionTests)

//=============================================================
BOOST_AUTO_TEST_CASE(Boolean1)
{
    std::vector<int> x;
    
    BOOST_CHECK_EQUAL(VTi::isEmpty(x), true);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, 5), false);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, 15), false);    
}

//=============================================================
BOOST_AUTO_TEST_CASE(Boolean2)
{
    std::vector<int> x = VTi::range(10);
    
    BOOST_CHECK_EQUAL(VTi::isEmpty(x), false);
    
    BOOST_CHECK_EQUAL(VTi::isAllNegativeOrZero(x), false);
    
    BOOST_CHECK_EQUAL(VTi::isAllPositiveOrZero(x), true);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, 5), true);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, 15), false);

    BOOST_CHECK_EQUAL(VTi::containsOnlyZeros(x), false);
}


//=============================================================
BOOST_AUTO_TEST_CASE(Boolean3)
{
    std::vector<int> x = VTi::range(-2,-10,-1);
    
    BOOST_CHECK_EQUAL(VTi::isEmpty(x), false);
    
    BOOST_CHECK_EQUAL(VTi::isAllNegativeOrZero(x), true);
    
    BOOST_CHECK_EQUAL(VTi::isAllPositiveOrZero(x), false);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, -5), true);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, 15), false);
    
    BOOST_CHECK_EQUAL(VTi::containsOnlyZeros(x), false);
}

//=============================================================
BOOST_AUTO_TEST_CASE(Boolean4)
{
    std::vector<int> x = VTi::zeros(10);
    
    BOOST_CHECK_EQUAL(VTi::isEmpty(x), false);
    
    BOOST_CHECK_EQUAL(VTi::isAllNegativeOrZero(x), true);
    
    BOOST_CHECK_EQUAL(VTi::isAllPositiveOrZero(x), true);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, -5), false);
    
    BOOST_CHECK_EQUAL(VTi::contains(x, 15), false);
    
    BOOST_CHECK_EQUAL(VTi::containsOnlyZeros(x), true);
}

//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
