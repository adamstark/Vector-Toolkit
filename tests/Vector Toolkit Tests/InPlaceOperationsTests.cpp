#ifndef IN_PLACE_OPERATIONS_TESTS
#define IN_PLACE_OPERATIONS_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// IN PLACE OPERATIONS TESTS
//=============================================================
BOOST_AUTO_TEST_SUITE(InPlaceOperationsTests)

//=============================================================
BOOST_AUTO_TEST_CASE(InPlaceOperationsTest1)
{
    std::vector<int> x = VTi::range(5);
    
    VTi::multiplyInPlace(x, 4);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 4*i);
    }
    
    VTi::divideInPlace(x, 2);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 2*i);
    }
    
    VTi::addInPlace(x, 5);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 2*i + 5);
    }
    
    VTi::subtractInPlace(x, 10);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 2*i-5);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(InPlaceOperationsTest2)
{
    std::vector<int> x1 = VTi::range(5);
    std::vector<int> x2 = VTi::range(5,10);
    
    VTi::multiplyInPlace(x1, x2);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], i*(i+5));
    }
    
    VTi::divideInPlace(x1, x2);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], i);
    }
    
    VTi::addInPlace(x1, x2);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], i+(i+5));
    }
    
    VTi::subtractInPlace(x1, x2);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], i);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(InPlaceOperationsTest3)
{
    std::vector<int> x1 = VTi::range(5);

    
    VTi::fillVectorWith(x1, -100);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], -100);
    }
    
    VTi::absInPlace(x1);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], 100);
    }
    
    VTi::squareInPlace(x1);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], 10000);
    }
    
    VTi::squareRootInPlace(x1);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], 100);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(InPlaceOperationsTest4)
{
    std::vector<int> x;
        
    x.push_back(6);
    x.push_back(3);
    x.push_back(1);
    x.push_back(4);
    x.push_back(5);
    x.push_back(2);
    
    VTi::sort(x);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], i+1);
    }
    
    VTi::reverse(x);
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(x[i], 6-i);
    }
}

//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
