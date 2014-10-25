#ifndef DISTANCES_AND_SIMILARITY_TESTS
#define DISTANCES_AND_SIMILARITY_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// DISTANCES AND SIMILARITY TESTS
//=============================================================
BOOST_AUTO_TEST_SUITE(DistancesAndSimilarityTests)

//=============================================================
BOOST_AUTO_TEST_CASE(DistancesAndSimilarity1)
{
    std::vector<int> x = VTi::range(5);
    
    BOOST_CHECK_EQUAL(VTi::euclideanDistance(x, x), 0.0);
    
    BOOST_CHECK_EQUAL(VTi::cosineDistance(x, x), 0.0);
    
    BOOST_CHECK_EQUAL(VTi::cosineSimilarity(x, x), 1.0);
    
    BOOST_CHECK_EQUAL(VTi::dotProduct(x, x), 30.0);
}

//=============================================================
BOOST_AUTO_TEST_CASE(DistancesAndSimilarity2)
{
    std::vector<int> x1 = VTi::range(5);
    std::vector<int> x2 = VTi::range(5,10);
   
    BOOST_CHECK_CLOSE(VTi::euclideanDistance(x1, x2), 11.180339887498949,0.00001);
    
    BOOST_CHECK_CLOSE(VTi::cosineDistance(x1, x2), 1.0 - 0.91465912076004718,0.00001);

    BOOST_CHECK_CLOSE(VTi::cosineSimilarity(x1, x2), 0.91465912076004718,0.00001);
    
    BOOST_CHECK_EQUAL(VTi::dotProduct(x1, x2), 80.0);
}

//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
