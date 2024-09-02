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
        //__int16 1d vector of weights;
        arma::Col<unsigned __int16> weights;
        unsigned __int16 weightLength;

    public:
        // Nueron class constructor, initializes the weights
        Neuron(unsigned __int16 numNextLayer) {
            // creates a vector weight length numNextLayer
            weights = arma::Col<unsigned __int16>(numNextLayer);
            weightLength = numNextLayer;
        }

        Neuron(){
            
        }


        //~Neuron() {
            //delete[] weights;
        //}

        arma::Col<unsigned __int16> getWeights() {
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

        void setWeight(short neuronY, unsigned __int16 inputWeight){
            weights[neuronY] = inputWeight;
        }

        // use when wanting to print information in a nueron
        void nueronInfo(){
            cout << "There are " << weightLength << " weights || they are ";
            for (__int16 i = 0; i < weightLength; i++)
                cout << weights[i] <<  " ";
            cout << endl;
        }

};
