#include <iostream>
#include "nueron.c++"
#include "hiddenLayer.c++"
#include "outputLayer.c++"
#include <armadillo>
#include <cstdlib>

using namespace std;
int main() {
    
    Layer layer(4,4);

    std::cout << layer.getActivationOfResult(1, 0) << endl;
    
    
    return 0; 
}