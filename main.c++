#include <iostream>
#include "nueron.c++"
#include "layer.c++"
#include <armadillo>
#include <cstdlib>

using namespace std;
int main() {
    
    HiddenLayer layer(4,4);

    srand(3);
    std::cout << layer.getActivationOfResult(1, 0) << endl;
    
    
    return 0; 
}