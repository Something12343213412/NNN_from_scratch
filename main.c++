#include <iostream>
#include "nueron.c++"
#include "layer.c++"
#include <armadillo>

int main() {
    

    HiddenLayer layer(10,10);
    unsigned __int16* k = layer.getWeights(1);
    for (int i = 0; i < 10; i++){
        std::cout << k[i] << endl;
    }
    
    return 0; 
}