#include <iostream>
#include "nueron.c++"
#include "layer.c++"

int main() {
    
    Neuron nueron(32);

    cout << nueron.getWeightLength() << endl;

    Layer hiddenLayer(10, 5);

    cout << hiddenLayer.getNuerons() << endl;


    return 0;
}