#include <iostream>
#include "nueron.c++"
#include "layer.c++"
#include <armadillo>

int main() {
    


    Layer hiddenLayer(10, 5);

    hiddenLayer.getNuerons()[0].nueronInfo();

    Neuron nueron(5);
    cout << " Activation " << nueron.getActivation() << " Specific Weight " << nueron.getWeights()[1] ;

    return 0; 
}