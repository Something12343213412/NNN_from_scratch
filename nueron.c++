#include <vector>
#include <iostream>
#pragma once
using namespace std;

class Neuron {
    private:
        __int8 activation = 0; 
        __int16* weights;
        __int16 weightLength;

    public:
        // Nueron class constructor, initializes the weights
        Neuron(__int16 numNextLayer) {
            
            weights = new __int16[numNextLayer];
            weightLength = numNextLayer;

            // Initialize all the weights to 1
            for (int x = 0; x < numNextLayer; x++)
                weights[x] = rand();

        }

        Neuron(){
            
        }

        //~Neuron() {
            //delete[] weights;
        //}

        __int16* getWeights() {
            return weights;
        }

        __int16 getWeightLength(){
            return weightLength;
        }

        //string getWeightsString(){
            //for (__int16 i = 0; i < weights; i++)
        //}

        void setWeights(__int16* inputWeights){
            weights = inputWeights;
        }

};
