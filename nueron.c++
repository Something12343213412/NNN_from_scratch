#include <vector>
#include <iostream>
#include "math.h"
#include <armadillo>
using namespace std;
using namespace arma;
#pragma once 

class Neuron {
    private:
        short activation = rand(); 
        //__int16* weights;
        arma::Col<__int16> weights;
        __int16 weightLength;

    public:
        // Nueron class constructor, initializes the weights
        Neuron(__int16 numNextLayer) {
            //weights = new __int16[numNextLayer];
            // creates a matrix to the previous weights pointer that has dimensions of numNextLater times 1
            weights = arma::Col<__int16>(numNextLayer,1);
            weightLength = numNextLayer;
        }

        Neuron(){
            
        }


        //~Neuron() {
            //delete[] weights;
        //}

        arma::Col<short> getWeights() {
            return weights;
        }

        __int16 getActivation(){
            return activation;
        }

        void changeActivation(__int16 num){
            activation = num;
        }

        __int16 getWeightLength(){
            return weightLength;
        }

        //string getWeightsString(){
            //for (__int16 i = 0; i < weights; i++)
        //}

        void setWeight(short neuronY, short inputWeight){
            weights[neuronY] = inputWeight;
        }

        // use when wanting to print information in a nueron
        void nueronInfo(){
            cout << "There are " << weightLength << " weights || they are ";
            for (__int16 i = 0; i < weightLength; i++)
                cout << weights[i] <<  " ";
            cout << endl;
        }

        //applies all the nuerons weights to the next layer
        __int16 getEffectiveWeights(__int16 nextNeuron){
            // __int32 represents decimal value in this case of num / 2^31
            // needed to convert into __int32 bc don't want any overflow, then dividing by 2
            
            return 0;
        }

};
