#include <math.h>
#include <armadillo>

__int16 relu(__int16 x){
    return (x + abs(x))/2;
}

