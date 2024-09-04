#include <iostream>
#include <armadillo>

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
        arma::Mat<unsigned __int16> *weightMatrix;
        arma::Col<unsigned __int16> *activations;
        
        unsigned __int16 numNeurons;

    public:
        HiddenLayer(unsigned __int16 numberNeurons, unsigned __int16 numberNextLayer){
            // declaring a AxB size matrix where A is the number of neurons and B is how many weights they need for the next layer
            weightMatrix = new arma::Mat<unsigned __int16>(numberNeurons, numberNextLayer, arma::fill::randn);
            activations  = new arma::Col<unsigned __int16>(numberNeurons, arma::fill::randn);
        }

        // gets a vector of one specific row of 
        arma::Mat<unsigned __int16>* getWeights(){
            return weightMatrix;
        }

        // returns a pointer of a column of data and if it doesn't exist returns a null ptr
        unsigned __int16* getWeights(unsigned __int16 column){
            try {
                return weightMatrix->colptr(column);
            } catch(...){
                std::cout << "trying to access bad data" << std::endl;
                return nullptr;
            }
        }
        
};