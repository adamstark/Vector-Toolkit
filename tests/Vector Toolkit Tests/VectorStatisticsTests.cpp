#ifndef VECTOR_STATISTICS_TESTS
#define VECTOR_STATISTICS_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// VECTOR STATISTICS TESTS
//=============================================================
BOOST_AUTO_TEST_SUITE(VectorStatisticsTests)

//=============================================================
BOOST_AUTO_TEST_CASE(VectorStatistics1)
{
    std::vector<int> x = VTi::range(1,11);
        
    BOOST_CHECK_EQUAL(VTi::countOccurrencesOf(x, 3), 1);
    BOOST_CHECK_EQUAL(VTi::countOccurrencesOf(x, 20), 0);
    
    BOOST_CHECK_EQUAL(VTi::sum(x), 55);
    
    BOOST_CHECK_EQUAL(VTi::product(x), 3628800);
    
    BOOST_CHECK_EQUAL(VTi::mean(x), 5.5);
        
    BOOST_CHECK_EQUAL(VTi::median(x), 5.5);
    
    BOOST_CHECK_EQUAL(VTi::standardDeviation(x), 2.8722813232690143);

    BOOST_CHECK_EQUAL(VTi::variance(x), 8.25);
    
    BOOST_CHECK_EQUAL(VTi::norm1(x), 55);
    
    BOOST_CHECK_EQUAL(VTi::norm2(x), 19.621416870348583);
    
    BOOST_CHECK_EQUAL(VTi::normP(x,5), 11.716817024499317);
    
    BOOST_CHECK_EQUAL(VTi::magnitude(x), 19.621416870348583);
}

//=============================================================
BOOST_AUTO_TEST_CASE(VectorStatistics2)
{
    std::vector<int> x = VTi::range(-4,4);
    
    x[4] = -4;
    
    BOOST_CHECK_EQUAL(VTi::countOccurrencesOf(x, -4), 2);
    BOOST_CHECK_EQUAL(VTi::countOccurrencesOf(x, 0), 0);
    BOOST_CHECK_EQUAL(VTi::countOccurrencesOf(x, 20), 0);
    
    BOOST_CHECK_EQUAL(VTi::sum(x), -8);
    
    BOOST_CHECK_EQUAL(VTi::product(x), -576);
    
    BOOST_CHECK_EQUAL(VTi::mean(x), -1.0);
    
    BOOST_CHECK_EQUAL(VTi::median(x), -1.5);
    
    BOOST_CHECK_EQUAL(VTi::standardDeviation(x), 2.5495097567963922);
    
    BOOST_CHECK_EQUAL(VTi::variance(x), 6.5);
    
    BOOST_CHECK_EQUAL(VTi::norm1(x), 20);
    
    BOOST_CHECK_EQUAL(VTi::norm2(x), 7.745966692414834);
    
    BOOST_CHECK_EQUAL(VTi::normP(x,5), 4.8194188237247051);
    
    BOOST_CHECK_EQUAL(VTi::magnitude(x), 7.745966692414834);
}




//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
