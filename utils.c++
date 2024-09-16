#include <math.h>
#include <iostream>
#include <armadillo>

__int16 sigmoid(long int x){
   

    std::cout << "X: " << x << " before mult: " << std::exp(-x) << " " << (1.0 + std::exp(-x)) << " after mult" << (1/(1+std::exp(-x)))*__INT16_MAX__ << std::endl;
    return (__int16)((1/(1.0+std::exp(-x)))*__INT16_MAX__);
}
