#include <iostream>
#include "nueron.c++"
#include <armadillo>

class Layer{
    
    private:
        Neuron* neurons; 
        unsigned __int16 numNeurons;   

    public:
        Layer(unsigned __int16 numNeurons, unsigned __int16 numFowardLayer){
            neurons = new Neuron[numNeurons];
            this->numNeurons = numNeurons;

            for (unsigned __int16 i = 0; i < numFowardLayer; i++)
                neurons[i] = Neuron(numFowardLayer);
        }

        Neuron* getNuerons(){
            return neurons;
        }

        Neuron getNueron(unsigned __int16 index){
            return neurons[index];
        }
        

    ~Layer() {
        delete[] neurons;
    }
        
    

};