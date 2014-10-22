#ifndef MAXIMA_AND_MINIMA_TESTS
#define MAXIMA_AND_MINIMA_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// MAXIMA AND MINIMA TESTS
//=============================================================
BOOST_AUTO_TEST_SUITE(MaximaAndMinimaTests)

//=============================================================
BOOST_AUTO_TEST_CASE(MaximaAndMinima1)
{
    std::vector<int> x = VTi::zeros(100);
    
    BOOST_CHECK_EQUAL(VTi::max(x), 0);
    BOOST_CHECK_EQUAL(VTi::min(x), 0);
    BOOST_CHECK_EQUAL(VTi::maxIndex(x), 0);
    BOOST_CHECK_EQUAL(VTi::minIndex(x), 0);
}

//=============================================================
BOOST_AUTO_TEST_CASE(MaximaAndMinima2)
{
    std::vector<int> x = VTi::range(100);
    
    BOOST_CHECK_EQUAL(VTi::max(x), 99);
    BOOST_CHECK_EQUAL(VTi::min(x), 0);
    BOOST_CHECK_EQUAL(VTi::maxIndex(x), 99);
    BOOST_CHECK_EQUAL(VTi::minIndex(x), 0);
}

//=============================================================
BOOST_AUTO_TEST_CASE(MaximaAndMinima3)
{
    std::vector<int> x;
    
    x.push_back(1);
    x.push_back(3);
    x.push_back(6);
    x.push_back(2);
    x.push_back(-5);
    
    BOOST_CHECK_EQUAL(VTi::max(x), 6);
    BOOST_CHECK_EQUAL(VTi::min(x), -5);
    BOOST_CHECK_EQUAL(VTi::maxIndex(x), 2);
    BOOST_CHECK_EQUAL(VTi::minIndex(x), 4);
}

//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
