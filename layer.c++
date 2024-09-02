#include <iostream>
#include "nueron.c++"
#include <armadillo>

class Layer{
    
    private:
        Neuron* neurons; 
        __int16 numNeurons;   

    public:
        Layer(__int16 numNeurons, __int16 numFowardLayer){
            neurons = new Neuron[numNeurons];
            this->numNeurons = numNeurons;

            for (__int16 i = 0; i < numFowardLayer; i++)
                neurons[i] = Neuron(numFowardLayer);
        }

        Neuron* getNuerons(){
            return neurons;
        }

        Neuron getNueron(__int16 index){
            return neurons[index];
        }
        

    ~Layer() {
        delete[] neurons;
    }
        
    

};