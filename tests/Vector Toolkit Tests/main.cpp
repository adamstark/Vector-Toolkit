#include <iostream>
#include "VectorToolkit.h"


int main(int argc, const char * argv[]) {
    
    std::vector<float> x;

    x.push_back(6);
    x.push_back(18);
    x.push_back(9);
    x.push_back(12);
    
   // std::vector<float> y = VTf::ge(x);
    
    //VTf::printVector(y);
    
    std::cout << VTf::standardDeviation(x) << std::endl;
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
