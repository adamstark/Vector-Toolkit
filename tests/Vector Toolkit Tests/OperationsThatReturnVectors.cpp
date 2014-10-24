#ifndef OPERATIONS_RETURNING_VECTORS_TESTS
#define OPERATIONS_RETURNING_VECTORS_TESTS

#include "../../src/VectorToolkit.h"
#include <vector>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

//=============================================================
// OPERATIONS RETURNING VECTORS TESTS
//=============================================================
BOOST_AUTO_TEST_SUITE(OperationsReturningVectorsTests)

//=============================================================
BOOST_AUTO_TEST_CASE(OperationsReturningVectors1)
{
    std::vector<int> x = VTi::range(5);
    
    std::vector<int> y1 = VTi::multiply(x, 4);
    
    BOOST_CHECK_EQUAL(y1.size(), x.size());
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(y1[i], 4*i);
    }
    
    std::vector<int> y2 = VTi::divide(y1, 2);
    
    BOOST_CHECK_EQUAL(y2.size(), x.size());
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(y2[i], 2*i);
    }
    
    std::vector<int> y3 = VTi::add(y2, 5);
    
    BOOST_CHECK_EQUAL(y3.size(), x.size());
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(y3[i], 2*i + 5);
    }
    
  
    std::vector<int> y4 = VTi::subtract(y3, 10);
    
    BOOST_CHECK_EQUAL(y4.size(), x.size());
    
    for (int i = 0;i < x.size();i++)
    {
        BOOST_CHECK_EQUAL(y4[i], 2*i-5);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(OperationsReturningVectors2)
{
    std::vector<int> x1 = VTi::range(5);
    std::vector<int> x2 = VTi::range(5,10);

    std::vector<int> y1 = VTi::multiply(x1, x2);
    
    BOOST_CHECK_EQUAL(y1.size(), x1.size());

    for (int i = 0;i < y1.size();i++)
    {
        BOOST_CHECK_EQUAL(y1[i], i*(i+5));
    }

    std::vector<int> y2 = VTi::divide(y1, x2);
    
    BOOST_CHECK_EQUAL(y2.size(), x1.size());

    for (int i = 0;i < y2.size();i++)
    {
        BOOST_CHECK_EQUAL(y2[i], i);
    }

    std::vector<int> y3 = VTi::add(y2, x2);
    
    BOOST_CHECK_EQUAL(y3.size(), x1.size());

    for (int i = 0;i < y3.size();i++)
    {
        BOOST_CHECK_EQUAL(y3[i], i+(i+5));
    }

    std::vector<int> y4 = VTi::subtract(y3, x2);
    
    BOOST_CHECK_EQUAL(y4.size(), x1.size());

    for (int i = 0;i < y4.size();i++)
    {
        BOOST_CHECK_EQUAL(y4[i], i);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(OperationsReturningVectors3)
{
    std::vector<int> x1 = VTi::range(5);
    
    
    VTi::fillVectorWith(x1, -100);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], -100);
    }
    
    std::vector<int> y1 = VTi::abs(x1);
    
    BOOST_CHECK_EQUAL(y1.size(), x1.size());
    
    for (int i = 0;i < y1.size();i++)
    {
        BOOST_CHECK_EQUAL(y1[i], 100);
    }
    
    std::vector<int> y2 = VTi::square(y1);
    
    BOOST_CHECK_EQUAL(y2.size(), x1.size());
    
    for (int i = 0;i < y2.size();i++)
    {
        BOOST_CHECK_EQUAL(y2[i], 10000);
    }
    
    std::vector<int> y3 = VTi::squareRoot(y2);
    
    BOOST_CHECK_EQUAL(y3.size(), x1.size());
    
    for (int i = 0;i < y3.size();i++)
    {
        BOOST_CHECK_EQUAL(y3[i], 100);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(OperationsReturningVectors4)
{
    std::vector<int> x1 = VTi::range(0,11);
    
    for (int i = 0;i < x1.size();i++)
    {
        BOOST_CHECK_EQUAL(x1[i], i);
    }
    
    std::vector<double> y1 = VTi::scale(x1, 0, 1);
    
    BOOST_CHECK_EQUAL(y1.size(), x1.size());
    
    for (int i = 0;i < y1.size();i++)
    {
        BOOST_CHECK_EQUAL(y1[i], (((double)i)/10.));
    }
    
}

//=============================================================
BOOST_AUTO_TEST_CASE(OperationsReturningVectors5)
{
    std::vector<int> x1 = VTi::range(0,11);
    
    std::vector<int> y1 = VTi::difference(x1);
    
    BOOST_CHECK_EQUAL(y1.size(), x1.size()-1);
    
    for (int i = 0;i < y1.size();i++)
    {
        BOOST_CHECK_EQUAL(y1[i], 1);
    }
}

//=============================================================
BOOST_AUTO_TEST_CASE(OperationsReturningVectors6)
{
    std::vector<int> x1 = VTi::range(0,11,2);
    
    std::vector<int> y1 = VTi::difference(x1);
    
    BOOST_CHECK_EQUAL(y1.size(), x1.size()-1);
    
    for (int i = 0;i < y1.size();i++)
    {
        BOOST_CHECK_EQUAL(y1[i], 2);
    }
}



//=============================================================
BOOST_AUTO_TEST_SUITE_END()
//=============================================================

#endif
