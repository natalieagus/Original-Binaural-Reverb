//
//  Delays.hpp
//  TheEngineSample
//
//  Created by Natalie Agus on 13/11/15.
//  Copyright © 2015 A Tasty Pixel. All rights reserved.
//

#ifndef Delays_hpp
#define Delays_hpp

#include <stdio.h>
typedef struct Delays {
    Delays(){
        delay = 0.0f;
        channel = 0;
        inputGainIndex = 0;
        outputGainIndex = 0;
    };
    Delays(float delay, size_t channel, int inputGain, int outputGain){
        this->delay = delay;
        this->channel = channel;
        this->inputGainIndex = inputGain;
        this->outputGainIndex = outputGain;
    }
    float delay;
    size_t channel;
    int inputGainIndex;
    int outputGainIndex;
    
} Delays;


#endif /* Delays_hpp */
