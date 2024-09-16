#include <iostream>
#include <armadillo>
#include "utils.c++"
#include <cstdlib>

/*
class Layer{
    
    private:
        Neuron* neurons; 
        unsigned __int16 numNeurons;
        arma::Mat<unsigned __int16> weightMatrix = arma::Mat<unsigned __int16>();

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

*/

class HiddenLayer{
    private:
        // declaring matrices for weights and activation (a vector)
        arma::Mat<float> *weightMatrix;
        arma::Col<float> *activations;
        
        unsigned __int16 numNeurons;

    public:
        HiddenLayer(float numberNeurons, float numberNextLayer){
            // declaring a AxB size matrix where A is the number of neurons and B is how many weights they need for the next layer
            weightMatrix = new arma::Mat<float>(numberNeurons, numberNextLayer, arma::fill::randu);
            activations  = new arma::Col<float>(numberNeurons, arma::fill::randu);
        }

        // gets a vector of one specific row of 
        arma::Mat<float>* getWeights(){
            return weightMatrix;
        }

        // returns a vector of selected column, if invalid returns a null pointer
        arma::Col<float> getWeights(unsigned __int16 column){
            try {
                return weightMatrix->col(column);
            } catch(...){
                std::cout << "trying to access bad data" << std::endl;
                return nullptr;
            }
        }

        arma::Col<float>* getActivations(){
            return activations;
        }        


        __int16 getActivationOfResult(unsigned __int16 column, float bias = 0){
            
            std::cout << trans(weightMatrix->col(column));
            std::cout << *activations << std::endl;


            std::cout << "Product of the two: ";

            
            
            std::cout << sum((weightMatrix->col(column) % *activations).eval()) << std::endl;
            //std::cout << sum(trans(weightMatrix->col(weightsColumn)) * *activations) + bias << std::endl;
            
                
            //return sigmoid(trans(weightMatrix->col(weightsColumn)) * *activations);
            return 5;
        }
        
};