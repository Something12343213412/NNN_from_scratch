#include <math.h>
#include <iostream>
#include <armadillo>

float sigmoid(float x){
   
    return (float)(1/(1.0+std::exp(-x)));
}
