//
//  snape_and_ladder.cpp
//  xcodeProjs
//
//  Created by Chris Whiting on 9/16/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include "snape_and_ladder.hpp"

float calcSideLength(float bottom, float left, bool max) {
   // float result = 0;
    bottom = bottom * bottom;
    left = left * left;
    if (max) { return sqrt(left + bottom); }
    else if (!max) { return sqrt(left - bottom); }
    else {
        return -1;
    }
    
}


int ladderSize() {
    int T;
//1 <= B < LS <= 1000
    float B;
    float LS;
    float cMax;
    float cMin;
    std::cin >> T;
    if (T >= 1 && T <= 1000) {
        for (int i=0; i < T; i++) {
            std::cin >> B;
            std::cin >> LS;
            std::cout << B << ", " << LS << '\n';
            if (B >= 1 && B < LS && LS <= 1000) {
                cMax = calcSideLength(B, LS, true);
                cMin = calcSideLength(B, LS, false);
                std::cout << cMin << " " << cMax << '\n';
            };
        }
    };
    return 0;
}