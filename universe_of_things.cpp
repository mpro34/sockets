//
//  universe_of_things.cpp
//  xcodeProjs
//
//  Created by Chris Whiting on 9/14/16.
//  Copyright © 2016 Chris Whiting. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>


using namespace std;

/*
 *
 *
 *
 */
void wait_for_fortytwo() {
    int i;
    std::cin >> i;
    while (i != 42) {
        std::cout << i << '\n';
        std::cin >> i;
    };
};
