#include <math.h>
#include <armadillo>

__int16 sigmoid(__int128 x){
    
    return (__int16)((1/(1+std::exp(-x)))*__INT16_MAX__);
}