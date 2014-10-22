#ifndef QUICK_VECTOR_CREATION_TESTS
#define QUICK_VECTOR_CREATION_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// QUICK VECTOR CREATION
//=============================================================
BOOST_AUTO_TEST_SUITE(QuickVectorCreation)

//=============================================================
BOOST_AUTO_TEST_CASE(Range1)
{
    std::vector<int> x = VTi::range(10);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], i);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(Range2)
{
    std::vector<int> x = VTi::range(5,15);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], i+5);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(Range3)
{
    std::vector<int> x = VTi::range(5,15,3);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], (i*3)+5);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(Range4)
{
    std::vector<int> x = VTi::range(5,15,-3);
    
    BOOST_CHECK_EQUAL(x.size(), 0);
}

//=============================================================
BOOST_AUTO_TEST_CASE(Range5)
{
    std::vector<int> x = VTi::range(15,5,3);
    
    BOOST_CHECK_EQUAL(x.size(), 0);
}

//=============================================================
BOOST_AUTO_TEST_CASE(Range6)
{
    std::vector<int> x = VTi::range(15,5,-2);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 15-(2*i));
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(Zeros)
{
    std::vector<int> x = VTi::zeros(10);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 0);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(Ones)
{
    std::vector<int> x = VTi::ones(10);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 1);
    }
}

//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
