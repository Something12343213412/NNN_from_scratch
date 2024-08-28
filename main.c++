#include <iostream>
#include "nueron.c++"
#include "layer.c++"


int main() {
    Layer hiddenLayer(10, 5);

    hiddenLayer.getNuerons()[0].nueronInfo();

    return 0; 
}