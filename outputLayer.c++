#include "hiddenLayer.c++"
#include <iostream>

class Int16_Output_Layer{
    private:
        // number of neurons in the output layer which then can be summed to get to the final output
        // only need 16 nuerons in the final layer
        unsigned __int8 numNeurons = 16;
        arma::Col<float> *activations;
        float confidence;

    
    public:

        Int16_Output_Layer(float numberNeurons, float numberNextLayer){
            activations  = new arma::Col<float>(numberNeurons, arma::fill::zeros);
        }

        // takes in previous layer and calculates all the activations of the current layer
        void set_actications(Layer* previous_layer, float bias){
            float find_individual_activation;
            for (unsigned __int8  i = 0; i < 16; i++){
                activations[i] = previous_layer->getActivationOfResult(i,bias);
            }
        }

        // summing the activations, then dividing by the total amount of neurons to get an average, then multiplying then  by 32767 to get a int 16
        __int16 generateOutput(){

        }


};