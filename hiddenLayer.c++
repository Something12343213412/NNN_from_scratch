#include <armadillo>
#include "utils.c++"
using namespace arma;

class Layer{
    private:
        // declaring matrices for weights and activation (a vector)
        arma::Mat<float> *weightMatrix;
        arma::Col<float> *activations;
        
        unsigned __int16 numNeurons;

    public:
        // creates a layer with each nueron having a connection to each nueron in the next layer, first input is the total # of nuerons and the second is the number in the next layer
        Layer(float numberNeurons, float numberNextLayer){
            numNeurons = numberNeurons;
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

        // returns the product of the two and squishing it with a sigmoid, first input is the column and the second is the bias
        float getActivationOfResult(unsigned __int16 column, float bias = 0){
            return sigmoid(static_cast<float>(arma::as_scalar(arma::sum((weightMatrix->col(column) % *activations).eval()))) + bias);
        }

        void setAllActivations(Layer *previousLayer){
            
        } 
        
};